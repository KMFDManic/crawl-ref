/*
 *  File:       ray.cc
 *  Summary:    Ray definition
 */

#include "AppHdr.h"
REVISION("$Rev$");

#include "ray.h"

#include <cmath>

#include "los.h"
#include "terrain.h"

// Advance a ray in quadrant 0.
// note that slope must be nonnegative!
// returns 0 if the advance was in x, 1 if it was in y, 2 if it was
// the diagonal
static int _find_next_intercept(double* accx, double* accy, const double slope)
{

    // handle perpendiculars
    if ( double_is_zero(slope) )
    {
        *accx += 1.0;
        return 0;
    }
    if ( slope > 100.0 )
    {
        *accy += 1.0;
        return 1;
    }

    const double xtarget = (static_cast<int>(*accx) + 1);
    const double ytarget = (static_cast<int>(*accy) + 1);
    const double xdistance = xtarget - *accx;
    const double ydistance = ytarget - *accy;
    double distdiff = (xdistance * slope - ydistance);

    // exact corner
    if ( double_is_zero( distdiff ) )
    {
        // move somewhat away from the corner
        if ( slope > 1.0 )
        {
            *accx = xtarget + EPSILON_VALUE * 2;
            *accy = ytarget + EPSILON_VALUE * 2 * slope;
        }
        else
        {
            *accx = xtarget + EPSILON_VALUE * 2 / slope;
            *accy = ytarget + EPSILON_VALUE * 2;
        }
        return 2;
    }

    // move to the boundary
    double traveldist;
    int rc = -1;
    if ( distdiff > 0.0 )
    {
        traveldist = ydistance / slope;
        rc = 1;
    }
    else
    {
        traveldist = xdistance;
        rc = 0;
    }

    // and a little into the next cell, taking care
    // not to go too far
    if ( distdiff < 0.0 )
        distdiff = -distdiff;
    traveldist += std::min(EPSILON_VALUE * 10.0, 0.5 * distdiff / slope);

    *accx += traveldist;
    *accy += traveldist * slope;
    return rc;
}

ray_def::ray_def(double ax, double ay, double s, int q, int idx)
    : accx(ax), accy(ay), slope(s), quadrant(q), fullray_idx(idx)
{
}

double ray_def::reflect(double p, double c) const
{
    return (c + c - p);
}

double ray_def::reflect(bool rx, double oldx, double newx) const
{
    if (rx ? fabs(slope) > 1.0 : fabs(slope) < 1.0)
        return (reflect(oldx, floor(oldx) + 0.5));

    const double flnew = floor(newx);
    const double flold = floor(oldx);
    return (reflect(oldx,
                    flnew > flold? flnew :
                    flold > flnew? flold :
                    (newx + oldx) / 2));
}

void ray_def::set_reflect_point(const double oldx, const double oldy,
                                double *newx, double *newy,
                                bool blocked_x, bool blocked_y)
{
    if (blocked_x == blocked_y)
    {
        // What to do?
        *newx = oldx;
        *newy = oldy;
        return;
    }

    if (blocked_x)
    {
        ASSERT(int(oldy) != int(*newy));
        *newy = oldy;
        *newx = reflect(true, oldx, *newx);
    }
    else
    {
        ASSERT(int(oldx) != int(*newx));
        *newx = oldx;
        *newy = reflect(false, oldy, *newy);
    }
}

void ray_def::advance_and_bounce()
{
    // 0 = down-right, 1 = down-left, 2 = up-left, 3 = up-right
    int bouncequad[4][3] =
    {
        { 1, 3, 2 }, { 0, 2, 3 }, { 3, 1, 0 }, { 2, 0, 1 }
    };
    int oldx = x(), oldy = y();
    const double oldaccx = accx, oldaccy = accy;
    int rc = advance(false);
    int newx = x(), newy = y();
    ASSERT( grid_is_solid(grd[newx][newy]) );

    const bool blocked_x = grid_is_solid(grd[oldx][newy]);
    const bool blocked_y = grid_is_solid(grd[newx][oldy]);

    if ( double_is_zero(slope) || slope > 100.0 )
        quadrant = bouncequad[quadrant][2];
    else if ( rc != 2 )
        quadrant = bouncequad[quadrant][rc];
    else
    {
        ASSERT( (oldx != newx) && (oldy != newy) );
        if ( blocked_x && blocked_y )
            quadrant = bouncequad[quadrant][rc];
        else if ( blocked_x )
            quadrant = bouncequad[quadrant][1];
        else
            quadrant = bouncequad[quadrant][0];
    }

    set_reflect_point(oldaccx, oldaccy, &accx, &accy, blocked_x, blocked_y);
}

double ray_def::get_degrees() const
{
    if (slope > 100.0)
    {
        if (quadrant == 3 || quadrant == 2)
            return (90.0);
        else
            return (270.0);
    }
    else if (double_is_zero(slope))
    {
        if (quadrant == 0 || quadrant == 3)
            return (0.0);
        else
            return (180.0);
    }

    double deg = atan(slope) * 180.0 / M_PI;

    switch (quadrant)
    {
    case 0:
        return (360.0 - deg);

    case 1:
        return (180.0 + deg);

    case 2:
        return (180.0 - deg);

    case 3:
        return (deg);
    }
    ASSERT(!"ray has illegal quadrant");
    return (0.0);
}

void ray_def::set_degrees(double deg)
{
    while (deg < 0.0)
        deg += 360.0;
    while (deg >= 360.0)
        deg -= 360.0;

    double _slope = tan(deg / 180.0 * M_PI);

    if (double_is_zero(_slope))
    {
        slope = 0.0;

        if (deg < 90.0 || deg > 270.0)
            quadrant = 0; // right/east
        else
            quadrant = 1; // left/west
    }
    else if (_slope > 0)
    {
        slope = _slope;

        if (deg >= 180.0 && deg <= 270.0)
            quadrant = 1;
        else
            quadrant = 3;
    }
    else
    {
        slope = -_slope;

        if (deg >= 90 && deg <= 180)
            quadrant = 2;
        else
            quadrant = 0;
    }

    if (slope > 1000.0)
        slope = 1000.0;
}

void ray_def::regress()
{
    int opp_quadrant[4] = { 2, 3, 0, 1 };
    quadrant = opp_quadrant[quadrant];
    advance(false);
    quadrant = opp_quadrant[quadrant];
}

int ray_def::advance_through(const coord_def &target)
{
    return (advance(true, &target));
}

int ray_def::advance(bool shortest_possible, const coord_def *target)
{
    if (!shortest_possible)
        return (raw_advance());

    // If we want to minimise the number of moves on the ray, look one
    // step ahead and see if we can get a diagonal.

    const coord_def old(static_cast<int>(accx), static_cast<int>(accy));
    const int ret = raw_advance();

    if (ret == 2 || (target && pos() == *target))
        return (ret);

    const double maccx = accx, maccy = accy;
    if (raw_advance() != 2)
    {
        const coord_def second(static_cast<int>(accx), static_cast<int>(accy));
        // If we can convert to a diagonal, do so.
        if ((second - old).abs() == 2)
            return (2);
    }

    // No diagonal, so roll back.
    accx = maccx;
    accy = maccy;

    return (ret);
}

int ray_def::raw_advance()
{
    int rc;
    switch (quadrant)
    {
    case 0:
        // going down-right
        rc = _find_next_intercept(&accx, &accy, slope);
        return rc;
    case 1:
        // going down-left
        accx = 100.0 - EPSILON_VALUE/10.0 - accx;
        rc   = _find_next_intercept(&accx, &accy, slope);
        accx = 100.0 - EPSILON_VALUE/10.0 - accx;
        return rc;
    case 2:
        // going up-left
        accx = 100.0 - EPSILON_VALUE/10.0 - accx;
        accy = 100.0 - EPSILON_VALUE/10.0 - accy;
        rc   = _find_next_intercept(&accx, &accy, slope);
        accx = 100.0 - EPSILON_VALUE/10.0 - accx;
        accy = 100.0 - EPSILON_VALUE/10.0 - accy;
        return rc;
    case 3:
        // going up-right
        accy = 100.0 - EPSILON_VALUE/10.0 - accy;
        rc   = _find_next_intercept(&accx, &accy, slope);
        accy = 100.0 - EPSILON_VALUE/10.0 - accy;
        return rc;
    default:
        return -1;
    }
}

// Shoot a ray from the given start point (accx, accy) with the given
// slope, bounded by the given pre-squared LOS radius.
// Store the visited cells in xpos[] and ypos[], and
// return the number of cells visited.
int ray_def::footprint(int radius2, int xpos[], int ypos[])
{
    // copy starting point
    double ax = accx;
    double ay = accy;
    int curx, cury;
    int cellnum;
    for (cellnum = 0; true; ++cellnum)
    {
        _find_next_intercept(&ax, &ay, slope);
        curx = static_cast<int>(ax);
        cury = static_cast<int>(ay);
        if (curx*curx + cury*cury > radius2)
            break;

        xpos[cellnum] = curx;
        ypos[cellnum] = cury;
    }
    return cellnum;
}

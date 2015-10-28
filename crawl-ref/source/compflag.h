#ifndef __included_crawl_compile_flags_h
#define __included_crawl_compile_flags_h

#define CRAWL_CFLAGS "-msse -msse2 -DUNIX -DFT2_BUILD_LIBRARY -DHAVE_FDATASYNC -D__LIBRETRO__ -DSQLITE_OMIT_LOAD_EXTENSION -DUSE_TILE -DUSE_TILE_LOCAL -DWIZARD -DUSE_FT -fPIC -DPROPORTIONAL_FONT=\"DejaVuSans.ttf\" -DMONOSPACED_FONT=\"DejaVuSansMono.ttf\" -DUSE_FB -I./source/rltiles -I./source/contrib/lua/src -I./source/contrib/pcre -I./source -I./source/contrib/libpng -I./source/contrib/zlib -I./source/contrib/freetype/include -I./source/contrib/sqlite -I./libretro/libco -O3 -DNDEBUG -std=c++11"
#define CRAWL_LDFLAGS "-lpthread -shared -Wl,--version-script=libretro/link.T -Wl,--no-undefined"
#define CRAWL_HOST "libretro"
#define CRAWL_ARCH "retro"

#endif


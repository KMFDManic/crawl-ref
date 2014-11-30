// This file has been automatically generated.

#ifndef TILEDEF_GUI_H
#define TILEDEF_GUI_H

#include "tiledef_defines.h"



enum tile_gui_type
{
    TILEG_GUI_FILLER_0 = 0,
    TILEG_STARTUP_STONESOUP,
    TILEG_STARTUP_TUTORIAL,
    TILEG_STARTUP_HINTS,
    TILEG_STARTUP_SPRINT,
    TILEG_STARTUP_ZOTDEF,
    TILEG_STARTUP_INSTRUCTIONS,
    TILEG_STARTUP_ARENA,
    TILEG_STARTUP_HIGH_SCORES,
    TILEG_AIRSTRIKE,
    TILEG_CHAIN_LIGHTNING,
    TILEG_CONJURE_BALL_LIGHTNING,
    TILEG_DEFLECT_MISSILES,
    TILEG_FLIGHT,
    TILEG_LIGHTNING_BOLT,
    TILEG_REPEL_MISSILES,
    TILEG_SHOCK,
    TILEG_SILENCE,
    TILEG_STATIC_DISCHARGE,
    TILEG_SWIFTNESS,
    TILEG_TORNADO,
    TILEG_ISKENDERUNS_MYSTIC_BLAST,
    TILEG_MAGIC_DART,
    TILEG_IOOD,
    TILEG_BATTLESPHERE,
    TILEG_DAZZLING_SPRAY,
    TILEG_FORCE_LANCE,
    TILEG_FULMINANT_PRISM,
    TILEG_SEARING_RAY,
    TILEG_IRON_SHOT,
    TILEG_DIG,
    TILEG_LEES_RAPID_DECONSTRUCTION,
    TILEG_LEHUDIBS_CRYSTAL_SPEAR,
    TILEG_LEDAS_LIQUEFACTION,
    TILEG_PASSWALL,
    TILEG_PETRIFY,
    TILEG_SANDBLAST,
    TILEG_SHATTER,
    TILEG_STATUE_FORM,
    TILEG_STONE_ARROW,
    TILEG_STONESKIN,
    TILEG_BERSERKER_RAGE,
    TILEG_CAUSE_FEAR,
    TILEG_CONFUSE,
    TILEG_CONFUSING_TOUCH,
    TILEG_CORONA,
    TILEG_DARKNESS,
    TILEG_ENSLAVEMENT,
    TILEG_HASTE,
    TILEG_INVISIBILITY,
    TILEG_MASS_CONFUSION,
    TILEG_SLOW,
    TILEG_SURE_BLADE,
    TILEG_TUKIMAS_DANCE,
    TILEG_INFUSION,
    TILEG_SONG_OF_SLAYING,
    TILEG_SPECTRAL_WEAPON,
    TILEG_DISCORD,
    TILEG_BOLT_OF_FIRE,
    TILEG_BOLT_OF_MAGMA,
    TILEG_CONJURE_FLAME,
    TILEG_DELAYED_FIREBALL,
    TILEG_FIRE_STORM,
    TILEG_FIREBALL,
    TILEG_FLAME_TONGUE,
    TILEG_IGNITE_POISON,
    TILEG_RING_OF_FLAMES,
    TILEG_STICKY_FLAME,
    TILEG_THROW_FLAME,
    TILEG_INNER_FLAME,
    TILEG_BOLT_OF_COLD,
    TILEG_CONDENSATION_SHIELD,
    TILEG_ENSORCELLED_HIBERNATION,
    TILEG_FREEZE,
    TILEG_FREEZING_CLOUD,
    TILEG_THROW_ICICLE,
    TILEG_ICE_FORM,
    TILEG_ICE_STORM,
    TILEG_METABOLIC_ENGLACIATION,
    TILEG_OZOCUBUS_ARMOUR,
    TILEG_OZOCUBUS_REFRIGERATION,
    TILEG_THROW_FROST,
    TILEG_AGONY,
    TILEG_ANIMATE_DEAD,
    TILEG_ANIMATE_SKELETON,
    TILEG_BOLT_OF_DRAINING,
    TILEG_BORGNJORS_REVIVIFICATION,
    TILEG_CONTROL_UNDEAD,
    TILEG_CORPSE_ROT,
    TILEG_DEATH_CHANNEL,
    TILEG_DEATHS_DOOR,
    TILEG_DISPEL_UNDEAD,
    TILEG_EXCRUCIATING_WOUNDS,
    TILEG_HAUNT,
    TILEG_NECROMUTATION,
    TILEG_PAIN,
    TILEG_REGENERATION,
    TILEG_SIMULACRUM,
    TILEG_SUBLIMATION_OF_BLOOD,
    TILEG_SYMBOL_OF_TORMENT,
    TILEG_TWISTED_RESURRECTION,
    TILEG_VAMPIRIC_DRAINING,
    TILEG_CIGOTUVIS_EMBRACE,
    TILEG_ALISTAIRS_INTOXICATION,
    TILEG_CURE_POISON,
    TILEG_MEPHITIC_CLOUD,
    TILEG_OLGREBS_TOXIC_RADIANCE,
    TILEG_POISON_ARROW,
    TILEG_POISONOUS_CLOUD,
    TILEG_SPIDER_FORM,
    TILEG_STING,
    TILEG_VENOM_BOLT,
    TILEG_ABJURATION,
    TILEG_MASS_ABJURATION,
    TILEG_CALL_CANINE_FAMILIAR,
    TILEG_CALL_IMP,
    TILEG_MALIGN_GATEWAY,
    TILEG_RECALL,
    TILEG_STICKS_TO_SNAKES,
    TILEG_SUMMON_BUTTERFLIES,
    TILEG_SUMMON_DEMON,
    TILEG_SUMMON_DRAGON,
    TILEG_SUMMON_GREATER_DEMON,
    TILEG_SUMMON_HORRIBLE_THINGS,
    TILEG_SUMMON_HYDRA,
    TILEG_SUMMON_ICE_BEAST,
    TILEG_SUMMON_SHADOW_CREATURES,
    TILEG_SUMMON_SMALL_MAMMAL,
    TILEG_SUMMON_LIGHTNING_SPIRE,
    TILEG_SUMMON_GUARDIAN_GOLEM,
    TILEG_SUMMON_FOREST,
    TILEG_MONSTROUS_MENAGERIE,
    TILEG_SUMMON_MANA_VIPER,
    TILEG_FORCEFUL_DISMISSAL,
    TILEG_SPELLFORGED_SERVITOR,
    TILEG_APPORTATION,
    TILEG_BLINK,
    TILEG_CONTROLLED_BLINK,
    TILEG_CONTROLLED_TELEPORT,
    TILEG_DISJUNCTION,
    TILEG_DISPERSAL,
    TILEG_PASSAGE_OF_GOLUBRIA,
    TILEG_PHASE_SHIFT,
    TILEG_PORTAL_PROJECTILE,
    TILEG_TELEPORT_OTHER,
    TILEG_WARP_WEAPON,
    TILEG_SHROUD_OF_GOLUBRIA,
    TILEG_SINGULARITY,
    TILEG_BLADE_HANDS,
    TILEG_BEASTLY_APPENDAGE,
    TILEG_IRRADIATE,
    TILEG_HYDRA_FORM,
    TILEG_DRAGON_FORM,
    TILEG_PARALYSE,
    TILEG_BOLT_OF_INACCURACY,
    TILEG_SUMMON_SWARM,
    TILEG_THUNDERBOLT,
    TILEG_MELEE,
    TILEG_EXPLOSIVE_BOLT,
    TILEG_CLOUD_CONE,
    TILEG_WEAVE_SHADOWS,
    TILEG_RANDOM_BOLT,
    TILEG_AIR_ELEMENTALS,
    TILEG_AWAKEN_FOREST,
    TILEG_AWAKEN_VINES,
    TILEG_BLACK_MARK,
    TILEG_BLINK_ALLIES_AWAY,
    TILEG_BLINK_ALLIES_ENCIRCLE,
    TILEG_BLINK_AWAY,
    TILEG_BLINK_CLOSE,
    TILEG_BLINK_OTHER,
    TILEG_BLINK_OTHER_CLOSE,
    TILEG_BLINK_RANGE,
    TILEG_BLINKBOLT,
    TILEG_BRAIN_FEED,
    TILEG_CALL_LOST_SOUL,
    TILEG_CALL_TIDE,
    TILEG_CANTRIP,
    TILEG_CHAIN_OF_CHAOS,
    TILEG_CHAOS_BREATH,
    TILEG_CHAOTIC_MIRROR,
    TILEG_COLD_BREATH,
    TILEG_CONTROL_WINDS,
    TILEG_CORRUPT_BODY,
    TILEG_CREATE_TENTACLES,
    TILEG_CRYSTAL_BOLT,
    TILEG_DEATH_RATTLE,
    TILEG_DIMENSION_ANCHOR,
    TILEG_DISINTEGRATE,
    TILEG_DRUIDS_CALL,
    TILEG_EARTH_ELEMENTALS,
    TILEG_ENERGY_BOLT,
    TILEG_ENSNARE,
    TILEG_EPHEMERAL_INFUSION,
    TILEG_FAKE_MARA_SUMMON,
    TILEG_FAKE_RAKSHASA_SUMMON,
    TILEG_FIRE_BREATH,
    TILEG_FIRE_ELEMENTALS,
    TILEG_FIRE_SUMMON,
    TILEG_FLASH_FREEZE,
    TILEG_FORCEFUL_INVITATION,
    TILEG_GHOSTLY_FIREBALL,
    TILEG_GHOSTLY_FLAMES,
    TILEG_GRAND_AVATAR,
    TILEG_HASTE_OTHER,
    TILEG_HASTE_PLANTS,
    TILEG_HELLFIRE_BURST,
    TILEG_HOLY_BREATH,
    TILEG_HOLY_FLAMES,
    TILEG_IGNITE_POISON_SINGLE,
    TILEG_INJURY_BOND,
    TILEG_INK_CLOUD,
    TILEG_INVISIBILITY_OTHER,
    TILEG_IRON_ELEMENTALS,
    TILEG_LEGENDARY_DESTRUCTION,
    TILEG_MALIGN_OFFERING,
    TILEG_MALMUTATE,
    TILEG_MESMERISE,
    TILEG_METAL_SPLINTERS,
    TILEG_MIASMA_BREATH,
    TILEG_MIGHT,
    TILEG_MIGHT_OTHER,
    TILEG_NOXIOUS_CLOUD,
    TILEG_ORB_OF_ELECTRICITY,
    TILEG_PETRIFYING_CLOUD,
    TILEG_PHANTOM_MIRROR,
    TILEG_PLANEREND,
    TILEG_POLYMORPH,
    TILEG_PORKALATOR,
    TILEG_PRIMAL_WAVE,
    TILEG_QUICKSILVER_BOLT,
    TILEG_REARRANGE_PIECES,
    TILEG_SAP_MAGIC,
    TILEG_SENTINEL_MARK,
    TILEG_SHADOW_BOLT,
    TILEG_SHADOW_SHARD,
    TILEG_SLEEP,
    TILEG_SPIT_ACID,
    TILEG_SPIT_POISON,
    TILEG_STEAM_BALL,
    TILEG_STICKY_FLAME_RANGE,
    TILEG_STICKY_FLAME_SPLASH,
    TILEG_STRIP_RESISTANCE,
    TILEG_SUMMON_DRAKES,
    TILEG_SUMMON_EYEBALLS,
    TILEG_SUMMON_HELL_BEAST,
    TILEG_SUMMON_ILLUSION,
    TILEG_SUMMON_MINOR_DEMON,
    TILEG_SUMMON_MUSHROOMS,
    TILEG_SUMMON_SPECTRAL_ORCS,
    TILEG_SUMMON_UFETUBUS,
    TILEG_SUMMON_UNDEAD,
    TILEG_SUMMON_VERMIN,
    TILEG_TELEPORT_SELF,
    TILEG_THORN_VOLLEY,
    TILEG_TOMB_OF_DOROKLOHE,
    TILEG_VIRULENCE,
    TILEG_WALL_OF_BRAMBLES,
    TILEG_WATERSTRIKE,
    TILEG_WATER_ELEMENTALS,
    TILEG_WIND_BLAST,
    TILEG_WORD_OF_RECALL,
    TILEG_HELLFIRE,
    TILEG_SMITING,
    TILEG_HEAL_OTHER,
    TILEG_MINOR_HEALING,
    TILEG_MAJOR_HEALING,
    TILEG_MAJOR_DESTRUCTION,
    TILEG_BANISHMENT,
    TILEG_TROGS_HAND,
    TILEG_BROTHERS_IN_ARMS,
    TILEG_DRAIN_LIFE,
    TILEG_INJURY_MIRROR,
    TILEG_MEMORISE,
    TILEG_FIGHTING_ON,
    TILEG_SHORT_BLADES_ON,
    TILEG_LONG_BLADES_ON,
    TILEG_AXES_ON,
    TILEG_MACES_FLAILS_ON,
    TILEG_POLEARMS_ON,
    TILEG_STAVES_ON,
    TILEG_SLINGS_ON,
    TILEG_BOWS_ON,
    TILEG_CROSSBOWS_ON,
    TILEG_THROWING_ON,
    TILEG_ARMOUR_ON,
    TILEG_DODGING_ON,
    TILEG_STEALTH_ON,
    TILEG_STABBING_ON,
    TILEG_SHIELDS_ON,
    TILEG_TRAPS_ON,
    TILEG_UNARMED_COMBAT_ON,
    TILEG_SPELLCASTING_ON,
    TILEG_CONJURATIONS_ON,
    TILEG_HEXES_ON,
    TILEG_CHARMS_ON,
    TILEG_SUMMONINGS_ON,
    TILEG_NECROMANCY_ON,
    TILEG_TRANSLOCATIONS_ON,
    TILEG_TRANSMUTATIONS_ON,
    TILEG_FIRE_MAGIC_ON,
    TILEG_ICE_MAGIC_ON,
    TILEG_AIR_MAGIC_ON,
    TILEG_EARTH_MAGIC_ON,
    TILEG_POISON_MAGIC_ON,
    TILEG_INVOCATIONS_ON,
    TILEG_EVOCATIONS_ON,
    TILEG_FIGHTING_FOCUS,
    TILEG_SHORT_BLADES_FOCUS,
    TILEG_LONG_BLADES_FOCUS,
    TILEG_AXES_FOCUS,
    TILEG_MACES_FLAILS_FOCUS,
    TILEG_POLEARMS_FOCUS,
    TILEG_STAVES_FOCUS,
    TILEG_SLINGS_FOCUS,
    TILEG_BOWS_FOCUS,
    TILEG_CROSSBOWS_FOCUS,
    TILEG_THROWING_FOCUS,
    TILEG_ARMOUR_FOCUS,
    TILEG_DODGING_FOCUS,
    TILEG_STEALTH_FOCUS,
    TILEG_STABBING_FOCUS,
    TILEG_SHIELDS_FOCUS,
    TILEG_TRAPS_FOCUS,
    TILEG_UNARMED_COMBAT_FOCUS,
    TILEG_SPELLCASTING_FOCUS,
    TILEG_CONJURATIONS_FOCUS,
    TILEG_HEXES_FOCUS,
    TILEG_CHARMS_FOCUS,
    TILEG_SUMMONINGS_FOCUS,
    TILEG_NECROMANCY_FOCUS,
    TILEG_TRANSLOCATIONS_FOCUS,
    TILEG_TRANSMUTATIONS_FOCUS,
    TILEG_FIRE_MAGIC_FOCUS,
    TILEG_ICE_MAGIC_FOCUS,
    TILEG_AIR_MAGIC_FOCUS,
    TILEG_EARTH_MAGIC_FOCUS,
    TILEG_POISON_MAGIC_FOCUS,
    TILEG_INVOCATIONS_FOCUS,
    TILEG_EVOCATIONS_FOCUS,
    TILEG_FIGHTING_OFF,
    TILEG_SHORT_BLADES_OFF,
    TILEG_LONG_BLADES_OFF,
    TILEG_AXES_OFF,
    TILEG_MACES_FLAILS_OFF,
    TILEG_POLEARMS_OFF,
    TILEG_STAVES_OFF,
    TILEG_SLINGS_OFF,
    TILEG_BOWS_OFF,
    TILEG_CROSSBOWS_OFF,
    TILEG_THROWING_OFF,
    TILEG_ARMOUR_OFF,
    TILEG_DODGING_OFF,
    TILEG_STEALTH_OFF,
    TILEG_STABBING_OFF,
    TILEG_SHIELDS_OFF,
    TILEG_TRAPS_OFF,
    TILEG_UNARMED_COMBAT_OFF,
    TILEG_SPELLCASTING_OFF,
    TILEG_CONJURATIONS_OFF,
    TILEG_HEXES_OFF,
    TILEG_CHARMS_OFF,
    TILEG_SUMMONINGS_OFF,
    TILEG_NECROMANCY_OFF,
    TILEG_TRANSLOCATIONS_OFF,
    TILEG_TRANSMUTATIONS_OFF,
    TILEG_FIRE_MAGIC_OFF,
    TILEG_ICE_MAGIC_OFF,
    TILEG_AIR_MAGIC_OFF,
    TILEG_EARTH_MAGIC_OFF,
    TILEG_POISON_MAGIC_OFF,
    TILEG_INVOCATIONS_OFF,
    TILEG_EVOCATIONS_OFF,
    TILEG_FIGHTING_MAX,
    TILEG_SHORT_BLADES_MAX,
    TILEG_LONG_BLADES_MAX,
    TILEG_AXES_MAX,
    TILEG_MACES_FLAILS_MAX,
    TILEG_POLEARMS_MAX,
    TILEG_STAVES_MAX,
    TILEG_SLINGS_MAX,
    TILEG_BOWS_MAX,
    TILEG_CROSSBOWS_MAX,
    TILEG_THROWING_MAX,
    TILEG_ARMOUR_MAX,
    TILEG_DODGING_MAX,
    TILEG_STEALTH_MAX,
    TILEG_STABBING_MAX,
    TILEG_SHIELDS_MAX,
    TILEG_TRAPS_MAX,
    TILEG_UNARMED_COMBAT_MAX,
    TILEG_SPELLCASTING_MAX,
    TILEG_CONJURATIONS_MAX,
    TILEG_HEXES_MAX,
    TILEG_CHARMS_MAX,
    TILEG_SUMMONINGS_MAX,
    TILEG_NECROMANCY_MAX,
    TILEG_TRANSLOCATIONS_MAX,
    TILEG_TRANSMUTATIONS_MAX,
    TILEG_FIRE_MAGIC_MAX,
    TILEG_ICE_MAGIC_MAX,
    TILEG_AIR_MAGIC_MAX,
    TILEG_EARTH_MAGIC_MAX,
    TILEG_POISON_MAGIC_MAX,
    TILEG_INVOCATIONS_MAX,
    TILEG_EVOCATIONS_MAX,
    TILEG_CMD_REST,
    TILEG_CMD_EXPLORE,
    TILEG_CMD_INTERLEVEL_TRAVEL,
    TILEG_CMD_AUTOFIGHT,
    TILEG_CMD_WAIT,
    TILEG_CMD_USE_ABILITY,
    TILEG_CMD_PRAY,
    TILEG_CMD_SEARCH_STASHES,
    TILEG_CMD_REPLAY_MESSAGES,
    TILEG_CMD_RESISTS_SCREEN,
    TILEG_CMD_DISPLAY_OVERMAP,
    TILEG_CMD_DISPLAY_RELIGION,
    TILEG_CMD_DISPLAY_MUTATIONS,
    TILEG_CMD_DISPLAY_SKILLS,
    TILEG_CMD_DISPLAY_CHARACTER_STATUS,
    TILEG_CMD_KNOWN_ITEMS,
    TILEG_CMD_SAVE_GAME_NOW,
    TILEG_CMD_EDIT_PLAYER_TILE,
    TILEG_CMD_DISPLAY_COMMANDS,
    TILEG_CMD_CHARACTER_DUMP,
    TILEG_CMD_DISPLAY_INVENTORY,
    TILEG_CMD_CAST_SPELL,
    TILEG_CMD_BUTCHER,
    TILEG_CMD_MEMORISE_SPELL,
    TILEG_CMD_DROP,
    TILEG_CMD_DISPLAY_MAP,
    TILEG_CMD_MAP_GOTO_TARGET,
    TILEG_CMD_MAP_PREV_LEVEL,
    TILEG_CMD_MAP_NEXT_LEVEL,
    TILEG_CMD_MAP_GOTO_LEVEL,
    TILEG_CMD_MAP_EXCLUDE_AREA,
    TILEG_CMD_MAP_FIND_EXCLUDED,
    TILEG_CMD_MAP_CLEAR_EXCLUDES,
    TILEG_CMD_MAP_ADD_WAYPOINT,
    TILEG_CMD_MAP_FIND_WAYPOINT,
    TILEG_CMD_MAP_FIND_UPSTAIR,
    TILEG_CMD_MAP_FIND_DOWNSTAIR,
    TILEG_CMD_MAP_FIND_YOU,
    TILEG_CMD_MAP_FIND_PORTAL,
    TILEG_CMD_MAP_FIND_TRAP,
    TILEG_CMD_MAP_FIND_ALTAR,
    TILEG_CMD_MAP_FIND_STASH,
    TILEG_CMD_KEYBOARD,
    TILEG_ABILITY_BAT_FORM,
    TILEG_ABILITY_BLINK,
    TILEG_ABILITY_BOTTLE_BLOOD,
    TILEG_ABILITY_BREATHE_ENERGY,
    TILEG_ABILITY_BREATHE_FIRE,
    TILEG_ABILITY_BREATHE_FROST,
    TILEG_ABILITY_BREATHE_LIGHTNING,
    TILEG_ABILITY_BREATHE_MEPHITIC,
    TILEG_ABILITY_BREATHE_POISON,
    TILEG_ABILITY_BREATHE_STEAM,
    TILEG_ABILITY_BREATHE_STICKY_FLAME,
    TILEG_ABILITY_CONVERT_TO_BEOGH,
    TILEG_ABILITY_DELAYED_FIREBALL,
    TILEG_ABILITY_DIG,
    TILEG_ABILITY_END_TRANSFORMATION,
    TILEG_ABILITY_EVOKE_BERSERK,
    TILEG_ABILITY_EVOKE_FOG,
    TILEG_ABILITY_EVOKE_INVISIBILITY_END,
    TILEG_ABILITY_EVOKE_INVISIBILITY,
    TILEG_ABILITY_EVOKE_FLIGHT,
    TILEG_ABILITY_EVOKE_TELEPORT,
    TILEG_ABILITY_EVOKE_TELEPORT_CONTROL,
    TILEG_ABILITY_FLIGHT_END,
    TILEG_ABILITY_FLIGHT,
    TILEG_ABILITY_JUMP,
    TILEG_ABILITY_HELLFIRE,
    TILEG_ABILITY_MUMMY_RESTORATION,
    TILEG_ABILITY_RECHARGE,
    TILEG_ABILITY_SHAFT_SELF,
    TILEG_ABILITY_SPIT_ACID,
    TILEG_ABILITY_SPIT_POISON,
    TILEG_ABILITY_STOP_RECALL,
    TILEG_ABILITY_STOP_SINGING,
    TILEG_ABILITY_RENOUNCE_RELIGION,
    TILEG_ABILITY_ASHENZARI_SCRY,
    TILEG_ABILITY_ASHENZARI_TRANSFER_KNOWLEDGE_END,
    TILEG_ABILITY_ASHENZARI_TRANSFER_KNOWLEDGE,
    TILEG_ABILITY_BEOGH_GIFT_ITEM,
    TILEG_ABILITY_BEOGH_RECALL,
    TILEG_ABILITY_BEOGH_SMITE,
    TILEG_ABILITY_CHEIBRIADOS_BEND_TIME,
    TILEG_ABILITY_CHEIBRIADOS_SLOUCH,
    TILEG_ABILITY_CHEIBRIADOS_TEMPORAL_DISTORTION,
    TILEG_ABILITY_CHEIBRIADOS_TIME_STEP,
    TILEG_ABILITY_DITHMENOS_SHADOW_FORM,
    TILEG_ABILITY_DITHMENOS_SHADOW_STEP,
    TILEG_ABILITY_ELYVILON_DIVINE_PROTECTION,
    TILEG_ABILITY_ELYVILON_DIVINE_VIGOUR,
    TILEG_ABILITY_ELYVILON_GREATER_HEALING,
    TILEG_ABILITY_ELYVILON_GREATER_SELF_HEALING,
    TILEG_ABILITY_ELYVILON_LESSER_HEALING,
    TILEG_ABILITY_ELYVILON_LESSER_SELF_HEALING,
    TILEG_ABILITY_ELYVILON_PURIFICATION,
    TILEG_ABILITY_FEDHAS_EVOLUTION,
    TILEG_ABILITY_FEDHAS_PLANT_RING,
    TILEG_ABILITY_FEDHAS_RAIN,
    TILEG_ABILITY_FEDHAS_SPAWN_SPORES,
    TILEG_ABILITY_FEDHAS_SUNLIGHT,
    TILEG_ABILITY_GOZAG_POTION_PETITION,
    TILEG_ABILITY_GOZAG_CALL_MERCHANT,
    TILEG_ABILITY_GOZAG_BRIBE_BRANCH,
    TILEG_ABILITY_JIYVA_CURE_BAD_MUTATIONS,
    TILEG_ABILITY_JIYVA_PARALYSE_JELLY,
    TILEG_ABILITY_JIYVA_REQUEST_JELLY,
    TILEG_ABILITY_JIYVA_SLIMIFY,
    TILEG_ABILITY_KIKU_RECEIVE_CORPSES,
    TILEG_ABILITY_KIKU_TORMENT,
    TILEG_ABILITY_LUGONU_BANISH,
    TILEG_ABILITY_LUGONU_BEND_SPACE,
    TILEG_ABILITY_LUGONU_CORRUPT,
    TILEG_ABILITY_LUGONU_ENTER_ABYSS,
    TILEG_ABILITY_LUGONU_EXIT_ABYSS,
    TILEG_ABILITY_MAKHLEB_GREATER_SERVANT,
    TILEG_ABILITY_MAKHLEB_LESSER_SERVANT,
    TILEG_ABILITY_MAKHLEB_MAJOR_DESTRUCTION,
    TILEG_ABILITY_MAKHLEB_MINOR_DESTRUCTION,
    TILEG_ABILITY_NEMELEX_DEAL_FOUR,
    TILEG_ABILITY_NEMELEX_STACK_FIVE,
    TILEG_ABILITY_NEMELEX_TRIPLE_DRAW,
    TILEG_ABILITY_OKAWARU_FINESSE,
    TILEG_ABILITY_OKAWARU_HEROISM,
    TILEG_ABILITY_QAZLAL_UPHEAVAL,
    TILEG_ABILITY_QAZLAL_ELEMENTAL_FORCE,
    TILEG_ABILITY_QAZLAL_DISASTER_AREA,
    TILEG_ABILITY_RU_DRAW_OUT_POWER,
    TILEG_ABILITY_RU_POWER_LEAP,
    TILEG_ABILITY_RU_APOCALYPSE,
    TILEG_ABILITY_RU_SACRIFICE_PURITY,
    TILEG_ABILITY_RU_SACRIFICE_WORDS,
    TILEG_ABILITY_RU_SACRIFICE_DRINK,
    TILEG_ABILITY_RU_SACRIFICE_ESSENCE,
    TILEG_ABILITY_RU_SACRIFICE_HEALTH,
    TILEG_ABILITY_RU_SACRIFICE_STEALTH,
    TILEG_ABILITY_RU_SACRIFICE_ARTIFICE,
    TILEG_ABILITY_RU_SACRIFICE_LOVE,
    TILEG_ABILITY_RU_SACRIFICE_COURAGE,
    TILEG_ABILITY_RU_SACRIFICE_ARCANA,
    TILEG_ABILITY_RU_SACRIFICE_NIMBLENESS,
    TILEG_ABILITY_RU_SACRIFICE_DURABILITY,
    TILEG_ABILITY_RU_SACRIFICE_HAND,
    TILEG_ABILITY_RU_REJECT_SACRIFICES,
    TILEG_ABILITY_SIF_MUNA_AMNESIA,
    TILEG_ABILITY_SIF_MUNA_CHANNEL,
    TILEG_ABILITY_TROG_BERSERK,
    TILEG_ABILITY_TROG_BROTHERS_IN_ARMS,
    TILEG_ABILITY_TROG_BURN_SPELLBOOKS,
    TILEG_ABILITY_TROG_HAND,
    TILEG_ABILITY_TSO_CLEANSING_FLAME,
    TILEG_ABILITY_TSO_DIVINE_SHIELD,
    TILEG_ABILITY_TSO_DIVINE_WARRIOR,
    TILEG_ABILITY_YRED_ANIMATE_DEAD,
    TILEG_ABILITY_YRED_ANIMATE_REMAINS,
    TILEG_ABILITY_YRED_DRAIN_LIFE,
    TILEG_ABILITY_YRED_ENSLAVE_SOUL,
    TILEG_ABILITY_YRED_INJURY_MIRROR,
    TILEG_ABILITY_YRED_RECALL,
    TILEG_ABILITY_ZIN_CURE_MUTATIONS,
    TILEG_ABILITY_ZIN_IMPRISON,
    TILEG_ABILITY_ZIN_RECITE,
    TILEG_ABILITY_ZIN_SANCTUARY,
    TILEG_ABILITY_ZIN_VITALISATION,
    TILEG_ABILITY_ZOTDEF_ACQUIREMENT,
    TILEG_ABILITY_ZOTDEF_ALARM_TRAP,
    TILEG_ABILITY_ZOTDEF_ALTAR,
    TILEG_ABILITY_ZOTDEF_ARROW_TRAP,
    TILEG_ABILITY_ZOTDEF_BAZAAR,
    TILEG_ABILITY_ZOTDEF_BLADE_TRAP,
    TILEG_ABILITY_ZOTDEF_BOLT_TRAP,
    TILEG_ABILITY_ZOTDEF_BURNING_BUSH,
    TILEG_ABILITY_ZOTDEF_CURSE_SKULL,
    TILEG_ABILITY_ZOTDEF_FUNGUS,
    TILEG_ABILITY_ZOTDEF_GOLD,
    TILEG_ABILITY_ZOTDEF_ICE_STATUE,
    TILEG_ABILITY_ZOTDEF_LIGHTNING_SPIRE,
    TILEG_ABILITY_ZOTDEF_NEEDLE_TRAP,
    TILEG_ABILITY_ZOTDEF_NET_TRAP,
    TILEG_ABILITY_ZOTDEF_OCS,
    TILEG_ABILITY_ZOTDEF_OKLOB_CIRCLE,
    TILEG_ABILITY_ZOTDEF_OKLOB_PLANT,
    TILEG_ABILITY_ZOTDEF_OKLOB_SAPLING,
    TILEG_ABILITY_ZOTDEF_PLANT,
    TILEG_ABILITY_ZOTDEF_REMOVE_CURSE,
    TILEG_ABILITY_ZOTDEF_SAGE,
    TILEG_ABILITY_ZOTDEF_OBSIDIAN_STATUE,
    TILEG_ABILITY_ZOTDEF_SPEAR_TRAP,
    TILEG_ABILITY_ZOTDEF_SPORE,
    TILEG_ABILITY_ZOTDEF_TELEPORT,
    TILEG_ABILITY_ZOTDEF_WATER,
    TILEG_TODO,
    TILEG_ERROR,
    TILEG_TAB_ITEM,
    TILEG_TAB_ITEM_1,
    TILEG_TAB_ITEM_2,
    TILEG_TAB_SPELL,
    TILEG_TAB_SPELL_1,
    TILEG_TAB_SPELL_2,
    TILEG_TAB_MEMORISE,
    TILEG_TAB_MEMORISE_1,
    TILEG_TAB_MEMORISE_2,
    TILEG_TAB_MONSTER,
    TILEG_TAB_MONSTER_1,
    TILEG_TAB_MONSTER_2,
    TILEG_TAB_SKILL,
    TILEG_TAB_SKILL_1,
    TILEG_TAB_SKILL_2,
    TILEG_TAB_COMMAND,
    TILEG_TAB_COMMAND_1,
    TILEG_TAB_COMMAND_2,
    TILEG_TAB_ABILITY,
    TILEG_TAB_ABILITY_1,
    TILEG_TAB_ABILITY_2,
    TILEG_TAB_COMMAND2,
    TILEG_TAB_COMMAND2_1,
    TILEG_TAB_COMMAND2_2,
    TILEG_TAB_NAVIGATION,
    TILEG_TAB_NAVIGATION_1,
    TILEG_TAB_NAVIGATION_2,
    TILEG_TAB_BLANK,
    TILEG_TAB_BLANK_1,
    TILEG_TAB_BLANK_2,
    TILEG_PROMPT_YES,
    TILEG_PROMPT_NO,
    TILEG_GUI_MAX
};

unsigned int tile_gui_count(tileidx_t idx);
tileidx_t tile_gui_basetile(tileidx_t idx);
int tile_gui_probs(tileidx_t idx);
const char *tile_gui_name(tileidx_t idx);
tile_info &tile_gui_info(tileidx_t idx);
bool tile_gui_index(const char *str, tileidx_t *idx);
bool tile_gui_equal(tileidx_t tile, tileidx_t idx);
tileidx_t tile_gui_coloured(tileidx_t idx, int col);

#endif


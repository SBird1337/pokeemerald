//#define TMHM_LEARNSET(moves) {(u32)(moves), ((u64)(moves) >> 32)}
//#define TMHM(tmhm) ((u64)1 << (ITEM_##tmhm - ITEM_TM01_FOCUS_PUNCH))

#define TMHM(tmhm) ((u8) ((ITEM_##tmhm) - ITEM_TM01_WORK_UP))

// This table determines which TMs and HMs a species is capable of learning.
// Each entry is a 64-bit bit array spread across two 32-bit values, with
// each bit corresponding to a .
/*const u32 gTMHMLearnsets[][4] =
{
    [SPECIES_NONE]        = TMHM_LEARNSET(0),

    [SPECIES_BULBASAUR]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_IVYSAUR]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VENUSAUR]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHARMANDER]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHARMELEON]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHARIZARD]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SQUIRTLE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_WARTORTLE]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_BLASTOISE]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CATERPIE]    = TMHM_LEARNSET(0),

    [SPECIES_METAPOD]     = TMHM_LEARNSET(0),

    [SPECIES_BUTTERFREE]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WEEDLE]      = TMHM_LEARNSET(0),

    [SPECIES_KAKUNA]      = TMHM_LEARNSET(0),

    [SPECIES_BEEDRILL]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PIDGEY]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_PIDGEOTTO]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_PIDGEOT]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_RATTATA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RATICATE]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SPEAROW]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_FEAROW]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_EKANS]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_ARBOK]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_PIKACHU]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RAICHU]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SANDSHREW]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SANDSLASH]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDORAN_F]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDORINA]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDOQUEEN]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDORAN_M]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDORINO]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDOKING]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CLEFAIRY]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CLEFABLE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_VULPIX]      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)),

    [SPECIES_NINETALES]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)),

    [SPECIES_JIGGLYPUFF]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WIGGLYTUFF]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ZUBAT]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM49_SNATCH)),

    [SPECIES_GOLBAT]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM49_SNATCH)),

    [SPECIES_ODDISH]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GLOOM]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_VILEPLUME]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_PARAS]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PARASECT]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VENONAT]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_VENOMOTH]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DIGLETT]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DUGTRIO]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEOWTH]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_PERSIAN]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_PSYDUCK]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GOLDUCK]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MANKEY]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PRIMEAPE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GROWLITHE]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ARCANINE]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_POLIWAG]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_POLIWHIRL]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_POLIWRATH]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ABRA]        = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_KADABRA]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ALAKAZAM]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MACHOP]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MACHOKE]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MACHAMP]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BELLSPROUT]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WEEPINBELL]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_VICTREEBEL]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_TENTACOOL]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_TENTACRUEL]  = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GEODUDE]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GRAVELER]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GOLEM]       = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PONYTA]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_RAPIDASH]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_SLOWPOKE]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SLOWBRO]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MAGNEMITE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MAGNETON]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FARFETCHD]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)),

    [SPECIES_DODUO]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_DODRIO]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_SEEL]        = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_DEWGONG]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GRIMER]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)),

    [SPECIES_MUK]         = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHELLDER]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CLOYSTER]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GASTLY]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)),

    [SPECIES_HAUNTER]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)),

    [SPECIES_GENGAR]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ONIX]        = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DROWZEE]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_HYPNO]       = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_KRABBY]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_KINGLER]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_VOLTORB]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ELECTRODE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_EXEGGCUTE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_EXEGGUTOR]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CUBONE]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAROWAK]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HITMONLEE]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HITMONCHAN]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LICKITUNG]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KOFFING]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WEEZING]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_RHYHORN]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RHYDON]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHANSEY]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TANGELA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KANGASKHAN]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HORSEA]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SEADRA]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GOLDEEN]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SEAKING]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_STARYU]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_STARMIE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MR_MIME]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SCYTHER]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_JYNX]        = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ELECTABUZZ]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGMAR]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PINSIR]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TAUROS]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGIKARP]    = TMHM_LEARNSET(0),

    [SPECIES_GYARADOS]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LAPRAS]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_DITTO]       = TMHM_LEARNSET(0),

    [SPECIES_EEVEE]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)),

    [SPECIES_VAPOREON]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_JOLTEON]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FLAREON]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)),

    [SPECIES_PORYGON]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_OMANYTE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_OMASTAR]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_KABUTO]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_KABUTOPS]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_AERODACTYL]  = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SNORLAX]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_ARTICUNO]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ZAPDOS]      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MOLTRES]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DRATINI]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_DRAGONAIR]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_DRAGONITE]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MEWTWO]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEW]         = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CHIKORITA]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BAYLEEF]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEGANIUM]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CYNDAQUIL]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)),

    [SPECIES_QUILAVA]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TYPHLOSION]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TOTODILE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CROCONAW]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_FERALIGATR]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SENTRET]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)),

    [SPECIES_FURRET]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HOOTHOOT]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_NOCTOWL]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LEDYBA]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LEDIAN]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SPINARAK]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ARIADOS]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CROBAT]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM02_FLY)),

    [SPECIES_CHINCHOU]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LANTURN]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_PICHU]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CLEFFA]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_IGGLYBUFF]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_TOGEPI]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TOGETIC]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NATU]        = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_XATU]        = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MAREEP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FLAAFFY]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AMPHAROS]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BELLOSSOM]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MARILL]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_AZUMARILL]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SUDOWOODO]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_POLITOED]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_HOPPIP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SKIPLOOM]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_JUMPLUFF]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_AIPOM]       = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SUNKERN]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SUNFLORA]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_YANMA]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WOOPER]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_QUAGSIRE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ESPEON]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_UMBREON]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MURKROW]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM02_FLY)),

    [SPECIES_SLOWKING]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MISDREAVUS]  = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_UNOWN]       = TMHM_LEARNSET(0),

    [SPECIES_WOBBUFFET]   = TMHM_LEARNSET(0),

    [SPECIES_GIRAFARIG]   = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PINECO]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FORRETRESS]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DUNSPARCE]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GLIGAR]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_STEELIX]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SNUBBULL]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GRANBULL]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_QWILFISH]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SCIZOR]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHUCKLE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HERACROSS]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SNEASEL]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TEDDIURSA]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_URSARING]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SLUGMA]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGCARGO]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SWINUB]      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PILOSWINE]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CORSOLA]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_REMORAID]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_OCTILLERY]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_DELIBIRD]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM02_FLY)),

    [SPECIES_MANTINE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SKARMORY]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HOUNDOUR]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HOUNDOOM]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KINGDRA]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_PHANPY]      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DONPHAN]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PORYGON2]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_STANTLER]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SMEARGLE]    = TMHM_LEARNSET(0),

    [SPECIES_TYROGUE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HITMONTOP]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SMOOCHUM]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ELEKID]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGBY]       = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MILTANK]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BLISSEY]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RAIKOU]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ENTEI]       = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SUICUNE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LARVITAR]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PUPITAR]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TYRANITAR]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LUGIA]       = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_HO_OH]       = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CELEBI]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_OLD_UNOWN_B] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_C] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_D] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_E] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_F] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_G] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_H] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_I] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_J] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_K] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_L] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_M] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_N] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_O] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_P] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_Q] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_R] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_S] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_T] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_U] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_V] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_W] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_X] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_Y] = TMHM_LEARNSET(0),

    [SPECIES_OLD_UNOWN_Z] = TMHM_LEARNSET(0),

    [SPECIES_TREECKO]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GROVYLE]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SCEPTILE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TORCHIC]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_COMBUSKEN]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BLAZIKEN]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MUDKIP]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MARSHTOMP]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SWAMPERT]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_POOCHYENA]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MIGHTYENA]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ZIGZAGOON]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LINOONE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_WURMPLE]     = TMHM_LEARNSET(0),

    [SPECIES_SILCOON]     = TMHM_LEARNSET(0),

    [SPECIES_BEAUTIFLY]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CASCOON]     = TMHM_LEARNSET(0),

    [SPECIES_DUSTOX]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LOTAD]       = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LOMBRE]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LUDICOLO]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SEEDOT]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NUZLEAF]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHIFTRY]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NINCADA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_NINJASK]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SHEDINJA]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_TAILLOW]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_SWELLOW]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_SHROOMISH]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BRELOOM]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SPINDA]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_WINGULL]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_PELIPPER]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)),

    [SPECIES_SURSKIT]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MASQUERAIN]  = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WAILMER]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_WAILORD]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SKITTY]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DELCATTY]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KECLEON]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BALTOY]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CLAYDOL]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NOSEPASS]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TORKOAL]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SABLEYE]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BARBOACH]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_WHISCASH]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LUVDISC]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CORPHISH]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_CRAWDAUNT]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_FEEBAS]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MILOTIC]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CARVANHA]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SHARPEDO]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_TRAPINCH]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VIBRAVA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FLYGON]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAKUHITA]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HARIYAMA]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ELECTRIKE]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MANECTRIC]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_NUMEL]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CAMERUPT]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SPHEAL]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SEALEO]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_WALREIN]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CACNEA]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CACTURNE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SNORUNT]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GLALIE]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LUNATONE]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SOLROCK]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_AZURILL]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_SPOINK]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GRUMPIG]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_PLUSLE]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MINUN]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MAWILE]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEDITITE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEDICHAM]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SWABLU]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_ALTARIA]     = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_WYNAUT]      = TMHM_LEARNSET(0),

    [SPECIES_DUSKULL]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DUSCLOPS]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ROSELIA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SLAKOTH]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VIGOROTH]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SLAKING]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GULPIN]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SWALOT]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TROPIUS]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_WHISMUR]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)),

    [SPECIES_LOUDRED]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_EXPLOUD]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CLAMPERL]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_HUNTAIL]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GOREBYSS]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ABSOL]       = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHUPPET]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BANETTE]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SEVIPER]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ZANGOOSE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RELICANTH]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ARON]        = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LAIRON]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AGGRON]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CASTFORM]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_VOLBEAT]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ILLUMISE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LILEEP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)),

    [SPECIES_CRADILY]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ANORITH]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ARMALDO]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RALTS]       = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_KIRLIA]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GARDEVOIR]   = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BAGON]       = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHELGON]     = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SALAMENCE]   = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BELDUM]      = TMHM_LEARNSET(0),

    [SPECIES_METANG]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_METAGROSS]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_REGIROCK]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_REGICE]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_REGISTEEL]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KYOGRE]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GROUDON]     = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RAYQUAZA]    = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LATIAS]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LATIOS]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_JIRACHI]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DEOXYS]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHIMECHO]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

};*/

static const u8 sNoneTMHMLearnset[] =
{
    0xFF
};

static const u8 sBulbasaurTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sIvysaurTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVenusaurTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCharmanderTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCharmeleonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCharizardTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSquirtleTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWartortleTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBlastoiseTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCaterpieTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMetapodTMHMLearnset[] =
{
    0xFF,
};

static const u8 sButterfreeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWeedleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKakunaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBeedrillTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPidgeyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPidgeottoTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPidgeotTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRattataTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRaticateTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSpearowTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sFearowTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sEkansTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sArbokTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPikachuTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRaichuTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSandshrewTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSandslashTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNidoranFTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNidorinaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNidoqueenTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNidoranMTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNidorinoTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNidokingTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sClefairyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sClefableTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVulpixTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNinetalesTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sJigglypuffTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWigglytuffTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sZubatTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGolbatTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sOddishTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGloomTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVileplumeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sParasTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sParasectTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVenonatTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVenomothTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDiglettTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDugtrioTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMeowthTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPersianTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPsyduckTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGolduckTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMankeyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPrimeapeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGrowlitheTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sArcanineTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPoliwagTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPoliwhirlTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPoliwrathTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAbraTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKadabraTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAlakazamTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMachopTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMachokeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMachampTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBellsproutTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWeepinbellTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVictreebelTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTentacoolTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTentacruelTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGeodudeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGravelerTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGolemTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPonytaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRapidashTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSlowpokeTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSlowbroTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMagnemiteTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMagnetonTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sFarfetchdTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDoduoTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDodrioTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSeelTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDewgongTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGrimerTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMukTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sShellderTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCloysterTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGastlyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHaunterTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGengarTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sOnixTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDrowzeeTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHypnoTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKrabbyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKinglerTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVoltorbTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sElectrodeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sExeggcuteTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM64_EXPLOSION),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sExeggutorTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCuboneTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMarowakTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHitmonleeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHitmonchanTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLickitungTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKoffingTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWeezingTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRhyhornTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRhydonTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sChanseyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTangelaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKangaskhanTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHorseaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSeadraTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGoldeenTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSeakingTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sStaryuTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sStarmieTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMrmimeTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sScytherTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sJynxTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sElectabuzzTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMagmarTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPinsirTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTaurosTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMagikarpTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGyaradosTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLaprasTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDittoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sEeveeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVaporeonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sJolteonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sFlareonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPorygonTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sOmanyteTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sOmastarTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKabutoTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKabutopsTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAerodactylTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSnorlaxTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sArticunoTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM76_FLY),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sZapdosTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM58_SKY_DROP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMoltresTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDratiniTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDragonairTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDragoniteTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMewtwoTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMewTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM60_QUASH),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sChikoritaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBayleefTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMeganiumTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCyndaquilTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sQuilavaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTyphlosionTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTotodileTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCroconawTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sFeraligatrTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSentretTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sFurretTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHoothootTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNoctowlTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLedybaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLedianTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSpinarakTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAriadosTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCrobatTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sChinchouTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLanturnTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPichuTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCleffaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sIgglybuffTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTogepiTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTogeticTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM56_FLING),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNatuTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sXatuTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMareepTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sFlaaffyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAmpharosTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBellossomTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMarillTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAzumarillTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSudowoodoTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPolitoedTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHoppipTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSkiploomTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sJumpluffTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAipomTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSunkernTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSunfloraTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sYanmaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWooperTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM78_BULLDOZE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sQuagsireTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sEspeonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sUmbreonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMurkrowTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM60_QUASH),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSlowkingTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMisdreavusTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sUnownTMHMLearnset[] =
{
    TMHM(TM10_HIDDEN_POWER),
    0xFF,
};

static const u8 sWobbuffetTMHMLearnset[] =
{
    TMHM(TM20_SAFEGUARD),
    0xFF,
};

static const u8 sGirafarigTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPinecoTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sForretressTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDunsparceTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGligarTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSteelixTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSnubbullTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGranbullTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sQwilfishTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sScizorTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sShuckleTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHeracrossTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSneaselTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTeddiursaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sUrsaringTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSlugmaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMagcargoTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSwinubTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPiloswineTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCorsolaTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRemoraidTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sOctilleryTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM55_SCALD),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDelibirdTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM76_FLY),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMantineTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSkarmoryTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHoundourTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHoundoomTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKingdraTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM60_QUASH),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPhanpyTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDonphanTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPorygon2TMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sStantlerTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSmeargleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTyrogueTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHitmontopTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSmoochumTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sElekidTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMagbyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMiltankTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBlisseyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRaikouTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM60_QUASH),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sEnteiTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM60_QUASH),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSuicuneTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM60_QUASH),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLarvitarTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPupitarTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTyranitarTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLugiaTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM58_SKY_DROP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHoOhTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM58_SKY_DROP),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCelebiTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTreeckoTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGrovyleTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSceptileTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTorchicTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCombuskenTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBlazikenTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMudkipTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMarshtompTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSwampertTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPoochyenaTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMightyenaTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sZigzagoonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLinooneTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWurmpleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSilcoonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBeautiflyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCascoonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDustoxTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLotadTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM55_SCALD),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLombreTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLudicoloTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSeedotTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM64_EXPLOSION),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNuzleafTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sShiftryTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTaillowTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSwellowTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWingullTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM55_SCALD),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPelipperTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRaltsTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKirliaTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGardevoirTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSurskitTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMasquerainTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sShroomishTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBreloomTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSlakothTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVigorothTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSlakingTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNincadaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNinjaskTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sShedinjaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWhismurTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLoudredTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM56_FLING),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sExploudTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMakuhitaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHariyamaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAzurillTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNosepassTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSkittyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDelcattyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSableyeTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMawileTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAronTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLaironTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAggronTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMedititeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMedichamTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sElectrikeTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sManectricTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sPlusleTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMinunTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVolbeatTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM62_ACROBATICS),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sIllumiseTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM62_ACROBATICS),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRoseliaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGulpinTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSwalotTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCarvanhaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM66_PAYBACK),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSharpedoTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWailmerTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWailordTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sNumelTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCameruptTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTorkoalTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSpoinkTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGrumpigTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSpindaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTrapinchTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sVibravaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sFlygonTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCacneaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCacturneTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSwabluTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAltariaTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sZangooseTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSeviperTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLunatoneTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM62_ACROBATICS),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSolrockTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBarboachTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWhiscashTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCorphishTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCrawdauntTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBaltoyTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sClaydolTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLileepTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCradilyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAnorithTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sArmaldoTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sFeebasTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMiloticTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sCastformTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM55_SCALD),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKecleonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sShuppetTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBanetteTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDuskullTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDusclopsTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sTropiusTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sChimechoTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sAbsolTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWynautTMHMLearnset[] =
{
    TMHM(TM20_SAFEGUARD),
    0xFF,
};

static const u8 sSnoruntTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGlalieTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSphealTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSealeoTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sWalreinTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sClamperlTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sHuntailTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGorebyssTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRelicanthTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLuvdiscTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBagonTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sShelgonTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sSalamenceTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sBeldumTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMetangTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sMetagrossTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRegirockTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRegiceTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRegisteelTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLatiasTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sLatiosTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sKyogreTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sGroudonTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sRayquazaTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sJirachiTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM100_CONFIDE),
    0xFF,
};

static const u8 sDeoxysTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM100_CONFIDE),
    0xFF,
};

const u8 *const gTMHMLearnsets[] =
{
    [SPECIES_NONE] = sBulbasaurTMHMLearnset,
    [SPECIES_BULBASAUR] = sBulbasaurTMHMLearnset,
    [SPECIES_IVYSAUR] = sIvysaurTMHMLearnset,
    [SPECIES_VENUSAUR] = sVenusaurTMHMLearnset,
    [SPECIES_CHARMANDER] = sCharmanderTMHMLearnset,
    [SPECIES_CHARMELEON] = sCharmeleonTMHMLearnset,
    [SPECIES_CHARIZARD] = sCharizardTMHMLearnset,
    [SPECIES_SQUIRTLE] = sSquirtleTMHMLearnset,
    [SPECIES_WARTORTLE] = sWartortleTMHMLearnset,
    [SPECIES_BLASTOISE] = sBlastoiseTMHMLearnset,
    [SPECIES_CATERPIE] = sCaterpieTMHMLearnset,
    [SPECIES_METAPOD] = sMetapodTMHMLearnset,
    [SPECIES_BUTTERFREE] = sButterfreeTMHMLearnset,
    [SPECIES_WEEDLE] = sWeedleTMHMLearnset,
    [SPECIES_KAKUNA] = sKakunaTMHMLearnset,
    [SPECIES_BEEDRILL] = sBeedrillTMHMLearnset,
    [SPECIES_PIDGEY] = sPidgeyTMHMLearnset,
    [SPECIES_PIDGEOTTO] = sPidgeottoTMHMLearnset,
    [SPECIES_PIDGEOT] = sPidgeotTMHMLearnset,
    [SPECIES_RATTATA] = sRattataTMHMLearnset,
    [SPECIES_RATICATE] = sRaticateTMHMLearnset,
    [SPECIES_SPEAROW] = sSpearowTMHMLearnset,
    [SPECIES_FEAROW] = sFearowTMHMLearnset,
    [SPECIES_EKANS] = sEkansTMHMLearnset,
    [SPECIES_ARBOK] = sArbokTMHMLearnset,
    [SPECIES_PIKACHU] = sPikachuTMHMLearnset,
    [SPECIES_RAICHU] = sRaichuTMHMLearnset,
    [SPECIES_SANDSHREW] = sSandshrewTMHMLearnset,
    [SPECIES_SANDSLASH] = sSandslashTMHMLearnset,
    [SPECIES_NIDORAN_F] = sNidoranFTMHMLearnset,
    [SPECIES_NIDORINA] = sNidorinaTMHMLearnset,
    [SPECIES_NIDOQUEEN] = sNidoqueenTMHMLearnset,
    [SPECIES_NIDORAN_M] = sNidoranMTMHMLearnset,
    [SPECIES_NIDORINO] = sNidorinoTMHMLearnset,
    [SPECIES_NIDOKING] = sNidokingTMHMLearnset,
    [SPECIES_CLEFAIRY] = sClefairyTMHMLearnset,
    [SPECIES_CLEFABLE] = sClefableTMHMLearnset,
    [SPECIES_VULPIX] = sVulpixTMHMLearnset,
    [SPECIES_NINETALES] = sNinetalesTMHMLearnset,
    [SPECIES_JIGGLYPUFF] = sJigglypuffTMHMLearnset,
    [SPECIES_WIGGLYTUFF] = sWigglytuffTMHMLearnset,
    [SPECIES_ZUBAT] = sZubatTMHMLearnset,
    [SPECIES_GOLBAT] = sGolbatTMHMLearnset,
    [SPECIES_ODDISH] = sOddishTMHMLearnset,
    [SPECIES_GLOOM] = sGloomTMHMLearnset,
    [SPECIES_VILEPLUME] = sVileplumeTMHMLearnset,
    [SPECIES_PARAS] = sParasTMHMLearnset,
    [SPECIES_PARASECT] = sParasectTMHMLearnset,
    [SPECIES_VENONAT] = sVenonatTMHMLearnset,
    [SPECIES_VENOMOTH] = sVenomothTMHMLearnset,
    [SPECIES_DIGLETT] = sDiglettTMHMLearnset,
    [SPECIES_DUGTRIO] = sDugtrioTMHMLearnset,
    [SPECIES_MEOWTH] = sMeowthTMHMLearnset,
    [SPECIES_PERSIAN] = sPersianTMHMLearnset,
    [SPECIES_PSYDUCK] = sPsyduckTMHMLearnset,
    [SPECIES_GOLDUCK] = sGolduckTMHMLearnset,
    [SPECIES_MANKEY] = sMankeyTMHMLearnset,
    [SPECIES_PRIMEAPE] = sPrimeapeTMHMLearnset,
    [SPECIES_GROWLITHE] = sGrowlitheTMHMLearnset,
    [SPECIES_ARCANINE] = sArcanineTMHMLearnset,
    [SPECIES_POLIWAG] = sPoliwagTMHMLearnset,
    [SPECIES_POLIWHIRL] = sPoliwhirlTMHMLearnset,
    [SPECIES_POLIWRATH] = sPoliwrathTMHMLearnset,
    [SPECIES_ABRA] = sAbraTMHMLearnset,
    [SPECIES_KADABRA] = sKadabraTMHMLearnset,
    [SPECIES_ALAKAZAM] = sAlakazamTMHMLearnset,
    [SPECIES_MACHOP] = sMachopTMHMLearnset,
    [SPECIES_MACHOKE] = sMachokeTMHMLearnset,
    [SPECIES_MACHAMP] = sMachampTMHMLearnset,
    [SPECIES_BELLSPROUT] = sBellsproutTMHMLearnset,
    [SPECIES_WEEPINBELL] = sWeepinbellTMHMLearnset,
    [SPECIES_VICTREEBEL] = sVictreebelTMHMLearnset,
    [SPECIES_TENTACOOL] = sTentacoolTMHMLearnset,
    [SPECIES_TENTACRUEL] = sTentacruelTMHMLearnset,
    [SPECIES_GEODUDE] = sGeodudeTMHMLearnset,
    [SPECIES_GRAVELER] = sGravelerTMHMLearnset,
    [SPECIES_GOLEM] = sGolemTMHMLearnset,
    [SPECIES_PONYTA] = sPonytaTMHMLearnset,
    [SPECIES_RAPIDASH] = sRapidashTMHMLearnset,
    [SPECIES_SLOWPOKE] = sSlowpokeTMHMLearnset,
    [SPECIES_SLOWBRO] = sSlowbroTMHMLearnset,
    [SPECIES_MAGNEMITE] = sMagnemiteTMHMLearnset,
    [SPECIES_MAGNETON] = sMagnetonTMHMLearnset,
    [SPECIES_FARFETCHD] = sFarfetchdTMHMLearnset,
    [SPECIES_DODUO] = sDoduoTMHMLearnset,
    [SPECIES_DODRIO] = sDodrioTMHMLearnset,
    [SPECIES_SEEL] = sSeelTMHMLearnset,
    [SPECIES_DEWGONG] = sDewgongTMHMLearnset,
    [SPECIES_GRIMER] = sGrimerTMHMLearnset,
    [SPECIES_MUK] = sMukTMHMLearnset,
    [SPECIES_SHELLDER] = sShellderTMHMLearnset,
    [SPECIES_CLOYSTER] = sCloysterTMHMLearnset,
    [SPECIES_GASTLY] = sGastlyTMHMLearnset,
    [SPECIES_HAUNTER] = sHaunterTMHMLearnset,
    [SPECIES_GENGAR] = sGengarTMHMLearnset,
    [SPECIES_ONIX] = sOnixTMHMLearnset,
    [SPECIES_DROWZEE] = sDrowzeeTMHMLearnset,
    [SPECIES_HYPNO] = sHypnoTMHMLearnset,
    [SPECIES_KRABBY] = sKrabbyTMHMLearnset,
    [SPECIES_KINGLER] = sKinglerTMHMLearnset,
    [SPECIES_VOLTORB] = sVoltorbTMHMLearnset,
    [SPECIES_ELECTRODE] = sElectrodeTMHMLearnset,
    [SPECIES_EXEGGCUTE] = sExeggcuteTMHMLearnset,
    [SPECIES_EXEGGUTOR] = sExeggutorTMHMLearnset,
    [SPECIES_CUBONE] = sCuboneTMHMLearnset,
    [SPECIES_MAROWAK] = sMarowakTMHMLearnset,
    [SPECIES_HITMONLEE] = sHitmonleeTMHMLearnset,
    [SPECIES_HITMONCHAN] = sHitmonchanTMHMLearnset,
    [SPECIES_LICKITUNG] = sLickitungTMHMLearnset,
    [SPECIES_KOFFING] = sKoffingTMHMLearnset,
    [SPECIES_WEEZING] = sWeezingTMHMLearnset,
    [SPECIES_RHYHORN] = sRhyhornTMHMLearnset,
    [SPECIES_RHYDON] = sRhydonTMHMLearnset,
    [SPECIES_CHANSEY] = sChanseyTMHMLearnset,
    [SPECIES_TANGELA] = sTangelaTMHMLearnset,
    [SPECIES_KANGASKHAN] = sKangaskhanTMHMLearnset,
    [SPECIES_HORSEA] = sHorseaTMHMLearnset,
    [SPECIES_SEADRA] = sSeadraTMHMLearnset,
    [SPECIES_GOLDEEN] = sGoldeenTMHMLearnset,
    [SPECIES_SEAKING] = sSeakingTMHMLearnset,
    [SPECIES_STARYU] = sStaryuTMHMLearnset,
    [SPECIES_STARMIE] = sStarmieTMHMLearnset,
    [SPECIES_MR_MIME] = sMrmimeTMHMLearnset,
    [SPECIES_SCYTHER] = sScytherTMHMLearnset,
    [SPECIES_JYNX] = sJynxTMHMLearnset,
    [SPECIES_ELECTABUZZ] = sElectabuzzTMHMLearnset,
    [SPECIES_MAGMAR] = sMagmarTMHMLearnset,
    [SPECIES_PINSIR] = sPinsirTMHMLearnset,
    [SPECIES_TAUROS] = sTaurosTMHMLearnset,
    [SPECIES_MAGIKARP] = sMagikarpTMHMLearnset,
    [SPECIES_GYARADOS] = sGyaradosTMHMLearnset,
    [SPECIES_LAPRAS] = sLaprasTMHMLearnset,
    [SPECIES_DITTO] = sDittoTMHMLearnset,
    [SPECIES_EEVEE] = sEeveeTMHMLearnset,
    [SPECIES_VAPOREON] = sVaporeonTMHMLearnset,
    [SPECIES_JOLTEON] = sJolteonTMHMLearnset,
    [SPECIES_FLAREON] = sFlareonTMHMLearnset,
    [SPECIES_PORYGON] = sPorygonTMHMLearnset,
    [SPECIES_OMANYTE] = sOmanyteTMHMLearnset,
    [SPECIES_OMASTAR] = sOmastarTMHMLearnset,
    [SPECIES_KABUTO] = sKabutoTMHMLearnset,
    [SPECIES_KABUTOPS] = sKabutopsTMHMLearnset,
    [SPECIES_AERODACTYL] = sAerodactylTMHMLearnset,
    [SPECIES_SNORLAX] = sSnorlaxTMHMLearnset,
    [SPECIES_ARTICUNO] = sArticunoTMHMLearnset,
    [SPECIES_ZAPDOS] = sZapdosTMHMLearnset,
    [SPECIES_MOLTRES] = sMoltresTMHMLearnset,
    [SPECIES_DRATINI] = sDratiniTMHMLearnset,
    [SPECIES_DRAGONAIR] = sDragonairTMHMLearnset,
    [SPECIES_DRAGONITE] = sDragoniteTMHMLearnset,
    [SPECIES_MEWTWO] = sMewtwoTMHMLearnset,
    [SPECIES_MEW] = sMewTMHMLearnset,
    [SPECIES_CHIKORITA] = sChikoritaTMHMLearnset,
    [SPECIES_BAYLEEF] = sBayleefTMHMLearnset,
    [SPECIES_MEGANIUM] = sMeganiumTMHMLearnset,
    [SPECIES_CYNDAQUIL] = sCyndaquilTMHMLearnset,
    [SPECIES_QUILAVA] = sQuilavaTMHMLearnset,
    [SPECIES_TYPHLOSION] = sTyphlosionTMHMLearnset,
    [SPECIES_TOTODILE] = sTotodileTMHMLearnset,
    [SPECIES_CROCONAW] = sCroconawTMHMLearnset,
    [SPECIES_FERALIGATR] = sFeraligatrTMHMLearnset,
    [SPECIES_SENTRET] = sSentretTMHMLearnset,
    [SPECIES_FURRET] = sFurretTMHMLearnset,
    [SPECIES_HOOTHOOT] = sHoothootTMHMLearnset,
    [SPECIES_NOCTOWL] = sNoctowlTMHMLearnset,
    [SPECIES_LEDYBA] = sLedybaTMHMLearnset,
    [SPECIES_LEDIAN] = sLedianTMHMLearnset,
    [SPECIES_SPINARAK] = sSpinarakTMHMLearnset,
    [SPECIES_ARIADOS] = sAriadosTMHMLearnset,
    [SPECIES_CROBAT] = sCrobatTMHMLearnset,
    [SPECIES_CHINCHOU] = sChinchouTMHMLearnset,
    [SPECIES_LANTURN] = sLanturnTMHMLearnset,
    [SPECIES_PICHU] = sPichuTMHMLearnset,
    [SPECIES_CLEFFA] = sCleffaTMHMLearnset,
    [SPECIES_IGGLYBUFF] = sIgglybuffTMHMLearnset,
    [SPECIES_TOGEPI] = sTogepiTMHMLearnset,
    [SPECIES_TOGETIC] = sTogeticTMHMLearnset,
    [SPECIES_NATU] = sNatuTMHMLearnset,
    [SPECIES_XATU] = sXatuTMHMLearnset,
    [SPECIES_MAREEP] = sMareepTMHMLearnset,
    [SPECIES_FLAAFFY] = sFlaaffyTMHMLearnset,
    [SPECIES_AMPHAROS] = sAmpharosTMHMLearnset,
    [SPECIES_BELLOSSOM] = sBellossomTMHMLearnset,
    [SPECIES_MARILL] = sMarillTMHMLearnset,
    [SPECIES_AZUMARILL] = sAzumarillTMHMLearnset,
    [SPECIES_SUDOWOODO] = sSudowoodoTMHMLearnset,
    [SPECIES_POLITOED] = sPolitoedTMHMLearnset,
    [SPECIES_HOPPIP] = sHoppipTMHMLearnset,
    [SPECIES_SKIPLOOM] = sSkiploomTMHMLearnset,
    [SPECIES_JUMPLUFF] = sJumpluffTMHMLearnset,
    [SPECIES_AIPOM] = sAipomTMHMLearnset,
    [SPECIES_SUNKERN] = sSunkernTMHMLearnset,
    [SPECIES_SUNFLORA] = sSunfloraTMHMLearnset,
    [SPECIES_YANMA] = sYanmaTMHMLearnset,
    [SPECIES_WOOPER] = sWooperTMHMLearnset,
    [SPECIES_QUAGSIRE] = sQuagsireTMHMLearnset,
    [SPECIES_ESPEON] = sEspeonTMHMLearnset,
    [SPECIES_UMBREON] = sUmbreonTMHMLearnset,
    [SPECIES_MURKROW] = sMurkrowTMHMLearnset,
    [SPECIES_SLOWKING] = sSlowkingTMHMLearnset,
    [SPECIES_MISDREAVUS] = sMisdreavusTMHMLearnset,
    [SPECIES_UNOWN] = sUnownTMHMLearnset,
    [SPECIES_WOBBUFFET] = sWobbuffetTMHMLearnset,
    [SPECIES_GIRAFARIG] = sGirafarigTMHMLearnset,
    [SPECIES_PINECO] = sPinecoTMHMLearnset,
    [SPECIES_FORRETRESS] = sForretressTMHMLearnset,
    [SPECIES_DUNSPARCE] = sDunsparceTMHMLearnset,
    [SPECIES_GLIGAR] = sGligarTMHMLearnset,
    [SPECIES_STEELIX] = sSteelixTMHMLearnset,
    [SPECIES_SNUBBULL] = sSnubbullTMHMLearnset,
    [SPECIES_GRANBULL] = sGranbullTMHMLearnset,
    [SPECIES_QWILFISH] = sQwilfishTMHMLearnset,
    [SPECIES_SCIZOR] = sScizorTMHMLearnset,
    [SPECIES_SHUCKLE] = sShuckleTMHMLearnset,
    [SPECIES_HERACROSS] = sHeracrossTMHMLearnset,
    [SPECIES_SNEASEL] = sSneaselTMHMLearnset,
    [SPECIES_TEDDIURSA] = sTeddiursaTMHMLearnset,
    [SPECIES_URSARING] = sUrsaringTMHMLearnset,
    [SPECIES_SLUGMA] = sSlugmaTMHMLearnset,
    [SPECIES_MAGCARGO] = sMagcargoTMHMLearnset,
    [SPECIES_SWINUB] = sSwinubTMHMLearnset,
    [SPECIES_PILOSWINE] = sPiloswineTMHMLearnset,
    [SPECIES_CORSOLA] = sCorsolaTMHMLearnset,
    [SPECIES_REMORAID] = sRemoraidTMHMLearnset,
    [SPECIES_OCTILLERY] = sOctilleryTMHMLearnset,
    [SPECIES_DELIBIRD] = sDelibirdTMHMLearnset,
    [SPECIES_MANTINE] = sMantineTMHMLearnset,
    [SPECIES_SKARMORY] = sSkarmoryTMHMLearnset,
    [SPECIES_HOUNDOUR] = sHoundourTMHMLearnset,
    [SPECIES_HOUNDOOM] = sHoundoomTMHMLearnset,
    [SPECIES_KINGDRA] = sKingdraTMHMLearnset,
    [SPECIES_PHANPY] = sPhanpyTMHMLearnset,
    [SPECIES_DONPHAN] = sDonphanTMHMLearnset,
    [SPECIES_PORYGON2] = sPorygon2TMHMLearnset,
    [SPECIES_STANTLER] = sStantlerTMHMLearnset,
    [SPECIES_SMEARGLE] = sSmeargleTMHMLearnset,
    [SPECIES_TYROGUE] = sTyrogueTMHMLearnset,
    [SPECIES_HITMONTOP] = sHitmontopTMHMLearnset,
    [SPECIES_SMOOCHUM] = sSmoochumTMHMLearnset,
    [SPECIES_ELEKID] = sElekidTMHMLearnset,
    [SPECIES_MAGBY] = sMagbyTMHMLearnset,
    [SPECIES_MILTANK] = sMiltankTMHMLearnset,
    [SPECIES_BLISSEY] = sBlisseyTMHMLearnset,
    [SPECIES_RAIKOU] = sRaikouTMHMLearnset,
    [SPECIES_ENTEI] = sEnteiTMHMLearnset,
    [SPECIES_SUICUNE] = sSuicuneTMHMLearnset,
    [SPECIES_LARVITAR] = sLarvitarTMHMLearnset,
    [SPECIES_PUPITAR] = sPupitarTMHMLearnset,
    [SPECIES_TYRANITAR] = sTyranitarTMHMLearnset,
    [SPECIES_LUGIA] = sLugiaTMHMLearnset,
    [SPECIES_HO_OH] = sHoOhTMHMLearnset,
    [SPECIES_CELEBI] = sCelebiTMHMLearnset,
    [SPECIES_OLD_UNOWN_B] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_C] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_D] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_E] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_F] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_G] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_H] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_I] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_J] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_K] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_L] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_M] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_N] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_O] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_P] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_Q] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_R] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_S] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_T] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_U] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_V] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_W] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_X] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_Y] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_Z] = sNoneTMHMLearnset,
    [SPECIES_TREECKO] = sTreeckoTMHMLearnset,
    [SPECIES_GROVYLE] = sGrovyleTMHMLearnset,
    [SPECIES_SCEPTILE] = sSceptileTMHMLearnset,
    [SPECIES_TORCHIC] = sTorchicTMHMLearnset,
    [SPECIES_COMBUSKEN] = sCombuskenTMHMLearnset,
    [SPECIES_BLAZIKEN] = sBlazikenTMHMLearnset,
    [SPECIES_MUDKIP] = sMudkipTMHMLearnset,
    [SPECIES_MARSHTOMP] = sMarshtompTMHMLearnset,
    [SPECIES_SWAMPERT] = sSwampertTMHMLearnset,
    [SPECIES_POOCHYENA] = sPoochyenaTMHMLearnset,
    [SPECIES_MIGHTYENA] = sMightyenaTMHMLearnset,
    [SPECIES_ZIGZAGOON] = sZigzagoonTMHMLearnset,
    [SPECIES_LINOONE] = sLinooneTMHMLearnset,
    [SPECIES_WURMPLE] = sWurmpleTMHMLearnset,
    [SPECIES_SILCOON] = sSilcoonTMHMLearnset,
    [SPECIES_BEAUTIFLY] = sBeautiflyTMHMLearnset,
    [SPECIES_CASCOON] = sCascoonTMHMLearnset,
    [SPECIES_DUSTOX] = sDustoxTMHMLearnset,
    [SPECIES_LOTAD] = sLotadTMHMLearnset,
    [SPECIES_LOMBRE] = sLombreTMHMLearnset,
    [SPECIES_LUDICOLO] = sLudicoloTMHMLearnset,
    [SPECIES_SEEDOT] = sSeedotTMHMLearnset,
    [SPECIES_NUZLEAF] = sNuzleafTMHMLearnset,
    [SPECIES_SHIFTRY] = sShiftryTMHMLearnset,
    [SPECIES_NINCADA] = sNincadaTMHMLearnset,
    [SPECIES_NINJASK] = sNinjaskTMHMLearnset,
    [SPECIES_SHEDINJA] = sShedinjaTMHMLearnset,
    [SPECIES_TAILLOW] = sTaillowTMHMLearnset,
    [SPECIES_SWELLOW] = sSwellowTMHMLearnset,
    [SPECIES_SHROOMISH] = sShroomishTMHMLearnset,
    [SPECIES_BRELOOM] = sBreloomTMHMLearnset,
    [SPECIES_SPINDA] = sSpindaTMHMLearnset,
    [SPECIES_WINGULL] = sWingullTMHMLearnset,
    [SPECIES_PELIPPER] = sPelipperTMHMLearnset,
    [SPECIES_SURSKIT] = sSurskitTMHMLearnset,
    [SPECIES_MASQUERAIN] = sMasquerainTMHMLearnset,
    [SPECIES_WAILMER] = sWailmerTMHMLearnset,
    [SPECIES_WAILORD] = sWailordTMHMLearnset,
    [SPECIES_SKITTY] = sSkittyTMHMLearnset,
    [SPECIES_DELCATTY] = sDelcattyTMHMLearnset,
    [SPECIES_KECLEON] = sKecleonTMHMLearnset,
    [SPECIES_BALTOY] = sBaltoyTMHMLearnset,
    [SPECIES_CLAYDOL] = sClaydolTMHMLearnset,
    [SPECIES_NOSEPASS] = sNosepassTMHMLearnset,
    [SPECIES_TORKOAL] = sTorkoalTMHMLearnset,
    [SPECIES_SABLEYE] = sSableyeTMHMLearnset,
    [SPECIES_BARBOACH] = sBarboachTMHMLearnset,
    [SPECIES_WHISCASH] = sWhiscashTMHMLearnset,
    [SPECIES_LUVDISC] = sLuvdiscTMHMLearnset,
    [SPECIES_CORPHISH] = sCorphishTMHMLearnset,
    [SPECIES_CRAWDAUNT] = sCrawdauntTMHMLearnset,
    [SPECIES_FEEBAS] = sFeebasTMHMLearnset,
    [SPECIES_MILOTIC] = sMiloticTMHMLearnset,
    [SPECIES_CARVANHA] = sCarvanhaTMHMLearnset,
    [SPECIES_SHARPEDO] = sSharpedoTMHMLearnset,
    [SPECIES_TRAPINCH] = sTrapinchTMHMLearnset,
    [SPECIES_VIBRAVA] = sVibravaTMHMLearnset,
    [SPECIES_FLYGON] = sFlygonTMHMLearnset,
    [SPECIES_MAKUHITA] = sMakuhitaTMHMLearnset,
    [SPECIES_HARIYAMA] = sHariyamaTMHMLearnset,
    [SPECIES_ELECTRIKE] = sElectrikeTMHMLearnset,
    [SPECIES_MANECTRIC] = sManectricTMHMLearnset,
    [SPECIES_NUMEL] = sNumelTMHMLearnset,
    [SPECIES_CAMERUPT] = sCameruptTMHMLearnset,
    [SPECIES_SPHEAL] = sSphealTMHMLearnset,
    [SPECIES_SEALEO] = sSealeoTMHMLearnset,
    [SPECIES_WALREIN] = sWalreinTMHMLearnset,
    [SPECIES_CACNEA] = sCacneaTMHMLearnset,
    [SPECIES_CACTURNE] = sCacturneTMHMLearnset,
    [SPECIES_SNORUNT] = sSnoruntTMHMLearnset,
    [SPECIES_GLALIE] = sGlalieTMHMLearnset,
    [SPECIES_LUNATONE] = sLunatoneTMHMLearnset,
    [SPECIES_SOLROCK] = sSolrockTMHMLearnset,
    [SPECIES_AZURILL] = sAzurillTMHMLearnset,
    [SPECIES_SPOINK] = sSpoinkTMHMLearnset,
    [SPECIES_GRUMPIG] = sGrumpigTMHMLearnset,
    [SPECIES_PLUSLE] = sPlusleTMHMLearnset,
    [SPECIES_MINUN] = sMinunTMHMLearnset,
    [SPECIES_MAWILE] = sMawileTMHMLearnset,
    [SPECIES_MEDITITE] = sMedititeTMHMLearnset,
    [SPECIES_MEDICHAM] = sMedichamTMHMLearnset,
    [SPECIES_SWABLU] = sSwabluTMHMLearnset,
    [SPECIES_ALTARIA] = sAltariaTMHMLearnset,
    [SPECIES_WYNAUT] = sWynautTMHMLearnset,
    [SPECIES_DUSKULL] = sDuskullTMHMLearnset,
    [SPECIES_DUSCLOPS] = sDusclopsTMHMLearnset,
    [SPECIES_ROSELIA] = sRoseliaTMHMLearnset,
    [SPECIES_SLAKOTH] = sSlakothTMHMLearnset,
    [SPECIES_VIGOROTH] = sVigorothTMHMLearnset,
    [SPECIES_SLAKING] = sSlakingTMHMLearnset,
    [SPECIES_GULPIN] = sGulpinTMHMLearnset,
    [SPECIES_SWALOT] = sSwalotTMHMLearnset,
    [SPECIES_TROPIUS] = sTropiusTMHMLearnset,
    [SPECIES_WHISMUR] = sWhismurTMHMLearnset,
    [SPECIES_LOUDRED] = sLoudredTMHMLearnset,
    [SPECIES_EXPLOUD] = sExploudTMHMLearnset,
    [SPECIES_CLAMPERL] = sClamperlTMHMLearnset,
    [SPECIES_HUNTAIL] = sHuntailTMHMLearnset,
    [SPECIES_GOREBYSS] = sGorebyssTMHMLearnset,
    [SPECIES_ABSOL] = sAbsolTMHMLearnset,
    [SPECIES_SHUPPET] = sShuppetTMHMLearnset,
    [SPECIES_BANETTE] = sBanetteTMHMLearnset,
    [SPECIES_SEVIPER] = sSeviperTMHMLearnset,
    [SPECIES_ZANGOOSE] = sZangooseTMHMLearnset,
    [SPECIES_RELICANTH] = sRelicanthTMHMLearnset,
    [SPECIES_ARON] = sAronTMHMLearnset,
    [SPECIES_LAIRON] = sLaironTMHMLearnset,
    [SPECIES_AGGRON] = sAggronTMHMLearnset,
    [SPECIES_CASTFORM] = sCastformTMHMLearnset,
    [SPECIES_VOLBEAT] = sVolbeatTMHMLearnset,
    [SPECIES_ILLUMISE] = sIllumiseTMHMLearnset,
    [SPECIES_LILEEP] = sLileepTMHMLearnset,
    [SPECIES_CRADILY] = sCradilyTMHMLearnset,
    [SPECIES_ANORITH] = sAnorithTMHMLearnset,
    [SPECIES_ARMALDO] = sArmaldoTMHMLearnset,
    [SPECIES_RALTS] = sRaltsTMHMLearnset,
    [SPECIES_KIRLIA] = sKirliaTMHMLearnset,
    [SPECIES_GARDEVOIR] = sGardevoirTMHMLearnset,
    [SPECIES_BAGON] = sBagonTMHMLearnset,
    [SPECIES_SHELGON] = sShelgonTMHMLearnset,
    [SPECIES_SALAMENCE] = sSalamenceTMHMLearnset,
    [SPECIES_BELDUM] = sBeldumTMHMLearnset,
    [SPECIES_METANG] = sMetangTMHMLearnset,
    [SPECIES_METAGROSS] = sMetagrossTMHMLearnset,
    [SPECIES_REGIROCK] = sRegirockTMHMLearnset,
    [SPECIES_REGICE] = sRegiceTMHMLearnset,
    [SPECIES_REGISTEEL] = sRegisteelTMHMLearnset,
    [SPECIES_KYOGRE] = sKyogreTMHMLearnset,
    [SPECIES_GROUDON] = sGroudonTMHMLearnset,
    [SPECIES_RAYQUAZA] = sRayquazaTMHMLearnset,
    [SPECIES_LATIAS] = sLatiasTMHMLearnset,
    [SPECIES_LATIOS] = sLatiosTMHMLearnset,
    [SPECIES_JIRACHI] = sJirachiTMHMLearnset,
    [SPECIES_DEOXYS] = sDeoxysTMHMLearnset,
    [SPECIES_CHIMECHO] = sChimechoTMHMLearnset
};
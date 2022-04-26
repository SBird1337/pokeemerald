#ifdef __VSCODE
// #include "items.h"
#endif

const struct Evolution gEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_VENAP]      = {{EVO_LEVEL, 16, SPECIES_TRAPLENT}},
    [SPECIES_TRAPLENT]   = {{EVO_LEVEL, 36, SPECIES_DIONARE}},
    [SPECIES_CELSINGE]   = {{EVO_LEVEL, 16, SPECIES_FAHRAMANE}},
    [SPECIES_FAHRAMANE]  = {{EVO_LEVEL, 34, SPECIES_KELVOYANT}},
    [SPECIES_ECHOISE]    = {{EVO_LEVEL, 16, SPECIES_MERMEIDON}},
    [SPECIES_MERMEIDON]  = {{EVO_LEVEL, 32, SPECIES_DOLPHURE}},
    [SPECIES_FIRANT]     = {{EVO_LEVEL, 12, SPECIES_PYROON}},
    [SPECIES_PYROON]     = {{EVO_LEVEL, 25, SPECIES_PYREIGN}},
    [SPECIES_FINCHERP]   = {{EVO_LEVEL, 19, SPECIES_GASHAWK}},
    [SPECIES_GASHAWK]    = {{EVO_LEVEL, 34, SPECIES_EAGLAIR}},
    [SPECIES_MOGEL]      = {{EVO_LEVEL, 17, SPECIES_FIRREL}},
    [SPECIES_AMPURE]     = {{EVO_LEVEL, 24, SPECIES_OHMURE}},
    [SPECIES_SANDSHREW]  = {{EVO_LEVEL, 22, SPECIES_SANDSLASH}},
    [SPECIES_LUPINE]     = {{EVO_LEVEL, 18, SPECIES_CANILEAF}},
    [SPECIES_CANILEAF]   = {{EVO_DEFEAT_TUNDROLF, 0, SPECIES_WOLVINE}},
    [SPECIES_SPOINK]     = {{EVO_LEVEL, 32, SPECIES_GRUMPIG}},
    [SPECIES_SPIDREAM]   = {{EVO_LEVEL, 30, SPECIES_ARACHMARE}},
    [SPECIES_PINECO]     = {{EVO_LEVEL, 31, SPECIES_FORRETRESS}},
    [SPECIES_EMBEAR]     = {{EVO_LEVEL, 34, SPECIES_GRIZLARE}},
    [SPECIES_MANKEY]     = {{EVO_LEVEL, 28, SPECIES_PRIMEAPE}},
    [SPECIES_MAREEP]     = {{EVO_LEVEL, 15, SPECIES_FLAAFFY}},
    [SPECIES_FLAAFFY]    = {{EVO_LEVEL, 30, SPECIES_AMPHAROS}},
    [SPECIES_WHISPAW]    = {{EVO_LEVEL, 29, SPECIES_COROONA}},
    [SPECIES_MOOCALF]    = {{EVO_FRIENDSHIP_M, 0, SPECIES_TAUROS},
                            {EVO_FRIENDSHIP_F, 0, SPECIES_MILTANK}},
    [SPECIES_INFLARE]    = {{EVO_LEVEL, 32, SPECIES_INGERO}},
    [SPECIES_DROWZEE]    = {{EVO_LEVEL, 26, SPECIES_HYPNO}},
    [SPECIES_CLEFFA]     = {{EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}},
    [SPECIES_CLEFAIRY]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}},
    [SPECIES_GRIFIC]     = {{EVO_LEVEL, 30, SPECIES_GRYPHONIC}},
    [SPECIES_BARKUB]     = {{EVO_FRIENDSHIP, 0, SPECIES_GROWLITHE}},
    [SPECIES_GROWLITHE]  = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}},
    [SPECIES_VIXUN]      = {{EVO_FRIENDSHIP, 0, SPECIES_VULPIX}},
    [SPECIES_VULPIX]     = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}},
    [SPECIES_WHISMUR]    = {{EVO_LEVEL, 20, SPECIES_LOUDRED}},
    [SPECIES_LOUDRED]    = {{EVO_LEVEL, 40, SPECIES_EXPLOUD}},
    [SPECIES_MURKROW]    = {{EVO_HELD_ITEM, ITEM_UMBRA_CREST, SPECIES_HARSKROW}},
    [SPECIES_JACKALANT]  = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_PHANTERN}},
    [SPECIES_SKALLOY]    = {{EVO_FRIENDSHIP, 0, SPECIES_SKARMORY}},
    [SPECIES_DUSKULL]    = {{EVO_LEVEL, 37, SPECIES_DUSCLOPS}},
    [SPECIES_VENONAT]    = {{EVO_LEVEL, 31, SPECIES_VENOMOTH}},
    [SPECIES_SMALLARD]   = {{EVO_LEVEL, 25, SPECIES_MALLARGE}},
    [SPECIES_GRIMER]     = {{EVO_LEVEL, 38, SPECIES_MUK}},
    [SPECIES_KOFFING]    = {{EVO_LEVEL, 35, SPECIES_WEEZING}},
    [SPECIES_ZANGOOSE]   = {{EVO_HELD_ITEM, ITEM_RIVALRY_ORB, SPECIES_ZANTILIDAE}},
    [SPECIES_SEVIPER]    = {{EVO_HELD_ITEM, ITEM_RIVALRY_ORB, SPECIES_PYTHANG}},
    [SPECIES_MEOWTH]     = {{EVO_LEVEL, 28, SPECIES_PERSIAN}},
    [SPECIES_LOTAD]      = {{EVO_LEVEL, 14, SPECIES_LOMBRE}},
    [SPECIES_LOMBRE]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}},
    [SPECIES_TRILLOGILL] = {{EVO_LEVEL_ATK_GT, 28, SPECIES_TIDASALE},
                            {EVO_LEVEL_DEF_GT, 28, SPECIES_TSUNALL},
                            {EVO_LEVEL_SPD_GT, 28, SPECIES_QUIISORD}},
    [SPECIES_SLOWPOKE]   = {{EVO_LEVEL, 37, SPECIES_SLOWBRO},
                            {EVO_HELD_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING},
                            {EVO_HELD_ITEM, ITEM_BLESSED_ANKH, SPECIES_SLOWPRIEST}},
    [SPECIES_REMORAID]   = {{EVO_LEVEL, 25, SPECIES_OCTILLERY}},
    [SPECIES_ABSOL]      = {{EVO_HELD_ITEM, ITEM_UMBRA_CREST, SPECIES_ABYSSUS}},
    [SPECIES_EQUILL]     = {{EVO_LEVEL, 28, SPECIES_TELLURE}},
    [SPECIES_CORPHISH]   = {{EVO_LEVEL, 30, SPECIES_CRAWDAUNT}},
    [SPECIES_GARGOTH]    = {{EVO_LEVEL, 35, SPECIES_CRAGOYLE}},
    [SPECIES_TOGEPI]     = {{EVO_FRIENDSHIP, 0, SPECIES_TOGETIC}},
    [SPECIES_CIRROFT]    = {{EVO_LEVEL, 30, SPECIES_CUMULOFT},
                            {EVO_LOCATION_SAND, 30, SPECIES_DESTADO},
                            {EVO_LOCATION_SNOW, 30, SPECIES_FROSTORM},
                            {EVO_LOCATION_FACTORY, 30, SPECIES_NIMBOLT}},
    [SPECIES_EEVEE]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                            {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                            {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_ILLUMEON}},
                            {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                            {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON},
    [SPECIES_CHIARAME]   = {{EVO_LEVEL, 36, SPECIES_SERBERINE}},
    [SPECIES_ENGIL]      = {{EVO_LEVEL, 30, SPECIES_BENENGIL}},
    [SPECIES_DUVAL]      = {{EVO_LEVEL, 30, SPECIES_MALDUVAL}},
    [SPECIES_RHYHORN]    = {{EVO_LEVEL, 42, SPECIES_RHYDON}},
    [SPECIES_SINESTRIL]  = {{EVO_LEVEL, 33, SPECIES_MALISTRIL}},
    [SPECIES_SCYTHER]    = {{EVO_HELD_ITEM, 29, ITEM_METAL_COAT}},
    [SPECIES_LAPRAS]     = {{EVO_FRIENDSHIP, 0, SPECIES_SIRENE}},
    [SPECIES_STANTLER]   = {{EVO_ITEM, ITEM_ARCTIC_STONE, SPECIES_CARIBRISK}},
    [SPECIES_HUSKII]     = {{EVO_LEVEL, 18, SPECIES_TUNDROLF}},
    [SPECIES_TUNDROLF]   = {{EVO_DEFEAT_CANILEAF, 0, SPECIES_WOLFROST}},
    [SPECIES_POLARA]     = {{EVO_ITEM, ITEM_ARCTIC_STONE, SPECIES_POLARICE}},
    [SPECIES_MIRUST]     = {{EVO_LEVEL, 33, SPECIES_FERRIAN}},
    [SPECIES_CACNEA]     = {{EVO_LEVEL, 32, SPECIES_CACTURNE}},
    [SPECIES_CACTURNE]   = {{EVO_HELD_ITEM, ITEM_UMBRA_CREST, SPECIES_CACKINGE}},
    [SPECIES_TRAPINCH]   = {{EVO_LEVEL, 35, SPECIES_VIBRAVA}},
    [SPECIES_VIBRAVA]    = {{EVO_LEVEL, 45, SPECIES_FLYGON}},
    [SPECIES_STARYU]     = {{EVO_LEVEL, 27, SPECIES_STARMIE}},
    [SPECIES_CHINCHOU]   = {{EVO_LEVEL, 27, SPECIES_LANTURN}},
    [SPECIES_FLINTUSK]   = {{EVO_LEVEL, 35, SPECIES_METUSK}},
    [SPECIES_ALLUFANG]   = {{EVO_LEVEL, 35, SPECIES_KUNAIGA}},
    [SPECIES_GOLDRAKE]   = {{EVO_LEVEL, 36, SPECIES_AROWANA}},
    [SPECIES_ATLAXA]     = {{EVO_LEVEL, 20, SPECIES_THORAXA}},
    [SPECIES_THORAXA]    = {{EVO_LEVEL, 40, SPECIES_ILLUMBRA}},
    [SPECIES_SNARLIGER]  = {{EVO_LEVEL, 30, SPECIES_NOCTIGER}},
    [SPECIES_NOCTIGER]   = {{EVO_LEVEL, 55, SPECIES_RAIGER}},
};

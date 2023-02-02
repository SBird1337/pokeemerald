#include "global.h"
#include "test_battle.h"

SINGLE_BATTLE_TEST("Speed Boost gradually boosts speed")
{
    GIVEN {
        PLAYER(SPECIES_TORCHIC) { Ability(ABILITY_SPEED_BOOST); Speed(99); };
        OPPONENT(SPECIES_WOBBUFFET) { Speed(100); };
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Foe Wobbuffet used Celebrate!");
        MESSAGE("Torchic used Celebrate!");
        ABILITY_POPUP(player, ABILITY_SPEED_BOOST);
        MESSAGE("Torchic's Speed Boost raised its SPEED!");
        MESSAGE("Torchic used Celebrate!");
        MESSAGE("Foe Wobbuffet used Celebrate!");
    }
}

// According to bulbapedia this should pass. (https://bulbapedia.bulbagarden.net/wiki/Speed_Boost_(Ability))
SINGLE_BATTLE_TEST("Speed Boost activates on fainted switch in")
{
    KNOWN_FAILING;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); Speed(1); };
        PLAYER(SPECIES_TORCHIC) { Ability(ABILITY_SPEED_BOOST); Speed(99); };
        OPPONENT(SPECIES_WOBBUFFET) { Speed(100); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Foe Wobbuffet used Tackle!");
        MESSAGE("Wobbuffet fainted!");

        ABILITY_POPUP(player, ABILITY_SPEED_BOOST);
        MESSAGE("Torchic's Speed Boost raised its SPEED!");
        MESSAGE("Torchic used Celebrate!");
        MESSAGE("Foe Wobbuffet used Celebrate!");
    }
}

#include "script_component.hpp"

if !(hasInterface) exitWith {};

[{
        (alive player)
}, {

    // Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
        enableEnvironment [false, true];

    // Shut the hell up  - Mute Orders and Reports
        {_x setSpeaker "NoVoice"} forEach playableUnits;

        enableSentences false;

        player call OETA_fnc_PlayerAddActions;

        [ format [hint_OETA_default, "The freqs have been freqed, and frequed good they have"] ] call oeta_fnc_hint;

        //=========== Rank role
        player call OETA_rank_fnc_rank;
        player call OETA_role_fnc_role;

        //=========== Patches
       // [player, _OETA_Section] call OETA_fnc_Patches;

        [ format [hint_OETA_default, "Hooah"] ] call oeta_fnc_hint;
},[player]] call CBA_fnc_waitUntilAndExecute;

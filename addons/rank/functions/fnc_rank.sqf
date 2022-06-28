#include "script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    _playerUID = getplayerUID player;

    switch (true) do {
        case (_playerUID in ranks_corporal) : {
            player setRank "CORPORAL";
            [ format [hint_OETA_default, "CORPORAL"] ] call oeta_fnc_hint;
        };
        case (_playerUID in ranks_sergeant) : {
            player setRank "SERGEANT";
            [ format [hint_OETA_default, "SERGEANT"] ] call oeta_fnc_hint;
        };
        case (_playerUID in ranks_lieutenant) : {
            player setRank "LIEUTENANT";
            [ format [hint_OETA_default, "LIEUTENANT"] ] call oeta_fnc_hint;
        };
        case (_playerUID in ranks_captain) : {
            player setRank "CAPTAIN";
            [ format [hint_OETA_default, "CAPTAIN"] ] call oeta_fnc_hint;
        };
        case (_playerUID in ranks_major) : {
            player setRank "MAJOR";
            [ format [hint_OETA_default, "MAJOR"] ] call oeta_fnc_hint;
        };
        case (_playerUID in ranks_colonel) : {
            player setRank "COLONEL";
            [ format [hint_OETA_default, "COLONEL"] ] call oeta_fnc_hint;
        };
        default {
            player setRank "PRIVATE";
        };
    };
};

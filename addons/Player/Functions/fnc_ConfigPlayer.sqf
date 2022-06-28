#include "script_component.hpp"
/*
Function: OETA_fnc_ConfigPlayer

name:
    Used to configure basic player attributes and equipment.

Arguments:
    _unit - Player the setup is applied to. <OBJECT>
    _Section - The Section the Player is in. <STRING>
    _Traits - Which Traits the player has, can be more than one. <ARRAY>
    _Loadout - Name of Loadout to call. Changes player equipment to Loadout from OETA Fundamentals. <STRING>

Examples:
    (begin example)
        [this] call OETA_fnc_ConfigPlayer;
        [this, "1 Section"] call OETA_fnc_ConfigPlayer;
        [this, "ds999", ["Pilot"]] call OETA_fnc_ConfigPlayer;
        [this, "ds990", ["Pilot", "Mission Maker"]] call OETA_fnc_ConfigPlayer;
        [this, "ds999", ["Pilot"], "3CB Pilot"] call OETA_fnc_ConfigPlayer;
    (end)

Author:
    MitchJC
*/

params [
    "_unit",
    ["_Section", "Support"],
    ["_Traits", []],
    ["_Loadout", []]
];

if (_Section isEqualto -1) exitwith {};

call {
    if (_Section isEqualto 0) exitwith {_Section = "1pt"};
    if (_Section isEqualto 1) exitwith {_Section = "2pt"};
    if (_Section isEqualto 2) exitwith {_Section = "3pt"};
    if (_Section isEqualto 3) exitwith {_Section = "4pt"};
    if (_Section isEqualto 4) exitwith {_Section = "sup"};
    if (_Section isEqualto 5) exitwith {_Section = "avi"};
    if (_Section isEqualto 6) exitwith {_Section = "hq"};
};

if (local _unit) then {

    //========== Trait Config
    private _TraitsArray = call {
        if ((typeName _Traits) isEqualTo "STRING") exitWith { [_Traits]};
        _Traits
    };

    if !(_TraitsArray isEqualTo []) then {
        {
            _unit setUnitTrait [_x, true, true];
        } forEach _TraitsArray;
    };
    //========ACE Player Traits
    if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {

        _unit setvariable ["ace_advanced_fatigue_performanceFactor",2.0,true];

        if (_unit getunittrait "Medic") then { _unit setVariable ["ace_medical_medicClass", 1, true]};
        if (_unit getunittrait "Doctor") then { _unit setVariable ["ace_medical_medicClass", 2, true]};
        if (_unit getunittrait "Engineer") then { _unit setVariable ["ace_isEngineer", 1, true]};
        if (_unit getunittrait "Adv Engineer") then { _unit setVariable ["ace_isEngineer", 2, true]};
    };

    //========== Loadout Config
    if !(_Loadout isEqualto []) then {
        [_unit, _Loadout] call OETA_fnc_Loadouts;
    };

    //=========== Patches
    [_unit, _Section] call OETA_fnc_Patches;

    //=========== Set Section
    _unit setVariable ["OETA_Section", _Section, true];
};

//========== SideChat Config
if (hasinterface) then {
    if ((isClass (configFile >> "CfgPatches" >> "task_force_radio")) && (EnableSideChat)) then {
        if ((_Section == "hq") || (_Section == "avi")) then {
            1 enablechannel [true, false];
        };
    };
};

#include "script_component.hpp"
/*
Function: OETA_fnc_ConfigPlayer

name:
    Used to configure basic player attributes && equipment.

Arguments:
    _unit - Player the setup is applied to. <OBJECT>
    _Section - The Section the Player is in. <STRING>
    _Traits - Which Traits the player has, can be more than one. <ARRAY>
    _Loadout - Name of Loadout to call. Changes player equipment to Loadout from OETA Fundamentals. <STRING>

Examples:
    (begin example)

    (end)

Author:
    MitchJC
*/
if (local _unit) then {

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

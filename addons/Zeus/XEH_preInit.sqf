#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

ADDON = true;
// AISpawns Modules

[
    "oeta_Zeus_Module_AISpawnsEast",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - East", "Enable the Spawn AI - East Zeus module for use with ZEN"],
    COMPONENT_NAME,
    true,
    true, {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["OETA", "AI Spawn - East", {_this call oeta_fnc_moduleAISpawnsEastZeus}, "\z\oeta\addons\media\images\icons\ai_EAST.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_fnc_addSetting;

[
    "oeta_Zeus_Module_AISpawnsIndep",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - Independent", "Enable the Spawn AI - Independent Zeus module for use with ZEN"],
    COMPONENT_NAME,
    true,
    true, {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["OETA", "AI Spawn - Independent", {_this call oeta_fnc_moduleAISpawnsIndepZeus}, "\z\oeta\addons\media\images\icons\ai_INDEP.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_fnc_addSetting;

[
    "oeta_Zeus_Module_AISpawnsWest",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - West", "Enable the Spawn AI - West Zeus module for use with ZEN"],
    COMPONENT_NAME,
    true,
    true, {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["OETA", "AI Spawn - West", {_this call oeta_fnc_moduleAISpawnsWestZeus}, "\z\oeta\addons\media\images\icons\ai_WEST.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_fnc_addSetting;

// CivilianSpawns Module
[
    "oeta_Zeus_Module_CivilianSpawns",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - Civilian", "Enable the Spawn AI Civilians Zeus module for use with ZEN"],
    COMPONENT_NAME,
    true,
    true, {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["OETA", "AI Spawn - Civilian", {_this call oeta_fnc_moduleCivilianSpawnsZeus}, "\z\oeta\addons\media\images\icons\ai_CIV.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_fnc_addSetting;

// SafeZone Module
[
    "oeta_Zeus_Module_SafeZone",
    "CHECKBOX",
    ["Zeus Module - Safe Zone", "Enable the Safe Zone Zeus module for use with ZEN"],
    COMPONENT_NAME,
    true,
    true, {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["OETA", "Safe Zone", {_this call oeta_fnc_moduleSafeZoneZeus}, "\z\oeta\addons\media\images\Icons\Safe_Zone.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_fnc_addSetting;

// MedicalDummy Module
[
    "oeta_Zeus_Module_MedicalDummy",
    "CHECKBOX",
    ["Zeus Module - Medical Dummy", "Enable the Medical Dummy Zeus module for use with ZEN"],
    COMPONENT_NAME,
    false,
    true, {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["OETA", "Medical Dummy", {_this call oeta_fnc_moduleCasualty}, "z\oeta\addons\Media\images\icons\Medical Area.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_fnc_addSetting;

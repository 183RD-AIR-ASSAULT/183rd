#include "script_component.hpp"

#include "XEH_PREP.hpp"


// Creator Actions
[
    "OETA_CreatorActions_Master",
    "CHECKBOX",
    ["Enable Creator Actions", "Show/Hide Creator Actions in ACE Self Interaction Menu"],
    "LRG Creator Actions",
    true,
    true,
    {
        if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitWith {};
        if (_this && { hasinterface }) then  {FUNC(InitCreatorActions)};
    }
] call CBA_Settings_fnc_init;

[
    "OETA_CreatorActions_Channels",
    "CHECKBOX",
    ["Enable Channel Actions", "Add Creator Actions to enable/disable channels"],
    "LRG Creator Actions",
    true,
    true,
    {
        if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitWith {};
        if (_this && { hasinterface }) then  {FUNC(InitChannelActions)};
    }
] call CBA_Settings_fnc_init;


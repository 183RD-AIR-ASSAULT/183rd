#include "script_component.hpp"


ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

// PilotCheck
[
    "OETA_Main_PilotCheck",
    "CHECKBOX",
    ["Pilot Restrictions", "Restrict aircraft so only those with 'Pilot' Trait can fly."],
    COMPONENT_NAME,
    false,
    true, {
         if (_this && { hasinterface }) then  { call FUNC(PilotCheck)};
    }
] call CBA_Settings_fnc_init;

// PilotCheck  change 909
[
    "OETA_Main_MaydayAccess",
    "LIST",
    ["Aircraft Emergency Access", "Restrict access to the emergency pilot takeover for helicopters (requires Pilot Check Enabled)"],
    COMPONENT_NAME,
    [[0,1,2],["No One", "909 Only", "Everyone"], 2],
    true, {

    }
] call CBA_Settings_fnc_init;

// TFAR - Range Multiplyer
[
    "oeta_Main_TFARTransmitRange",
    "SLIDER",
    ["TFAR - Range Multiplyer", "Increase or decrease max Transmit Range. 0.1 = poor range, 3.5 = All of Altis"],
    COMPONENT_NAME,
    [0, 10, 2.5, 1],
    true,
    {

    }
] call CBA_fnc_addSetting;

// TFAR - Terrain Interference
[
    "oeta_Main_TFARTerrainInterference",
    "SLIDER",
    ["TFAR - Terrain Interference", "How much Terrain interferes with range. 0.1 = little impact, 2.0 = large impact."],
    COMPONENT_NAME,
    [0, 5, 1, 1],
    true,
    {

    }
] call CBA_fnc_addSetting;
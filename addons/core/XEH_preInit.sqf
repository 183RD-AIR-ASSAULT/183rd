#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

if !(GETMVALUE(Enabled,false)) exitWith {
    INFO("Framework is disabled in Mission settings... exiting");
};

INFO("Initializing Framework");
LOG("Global Pre Init");
SETMVAR(Initialized,false);
[] call FUNC(setDefaults);

[QGVAR(EntityAttributeLoad), {
    params ["_object", "_propertyName", "_value", ["_isGlobal",false,[false]]];
    _object setvariable [_propertyName,_value,_isGlobal];
}] call CBA_fnc_addEventHandler;

//[QGVAR(SettingsLoaded), {
//    //_respawnTypeArray = [['1 Life','ONELIFE'],['Unlimited','UNLIMITED'],['Individual Tickets','INDTICKETS'],['Team Tickets','TEAMTICKETS']];
//}] call CBA_fnc_addEventHandler;

[QEGVAR(EndMission,LocalObjectsEvent), {
    {
        _x enableSimulation false;
        removeAllWeapons _x;
    } foreach vehicles select {local _x};
    {
        _x enableSimulation false;
        removeAllWeapons _x;
    } foreach allUnits select {local _x};
}] call CBA_fnc_addEventHandler;

[QEGVAR(Debug,DebugMessageEvent), {
    params ["_message"];
    [_message] call FUNC(debugMessageDisplay);
}] call CBA_fnc_addEventHandler;

private _GlobalPreInit = GETMVALUE(GlobalPreInit,"");
LOG_1("_GlobalPreInit:%1",_GlobalPreInit);
if !(_GlobalPreInit isEqualTo "") then {
    call compile _GlobalPreInit;
};

if (!(hasInterface) || (isServer)) then {
    [QGVAR(EndmissionEvent), {
        params ["_scenario"];
        [QEGVAR(EndMission,LocalObjectsEvent), []] call CBA_fnc_localEvent;
    }] call CBA_fnc_addEventHandler;
};

GVAR(CachedDisplayNames) = [];

ADDON = true;

// Flip Vehicle
[
    "OETA_Main_FlipVehicle",
    "CHECKBOX",
    ["Flip Vehicle", "Add an action to players to allow them to flip land vehicles."],
    COMPONENT_NAME,
    false,
    true, {
        if (_this && { hasinterface }) then  { call FUNC(FlipVehicle)};
    }
] call CBA_Settings_fnc_init;

// OETA_Main_DynamicSim
[
    "OETA_Main_DynamicSim",
    "CHECKBOX",
    ["TFD Dynamic Sim", "Simple check for Dynamic Sim enabled. If not enabled it will enable it to default TFD Values. "],
    COMPONENT_NAME,
    false,
    true, {
        if (_this && { isserver }) then  { call FUNC(DynamicSim)};
    }
] call CBA_Settings_fnc_init;

// OETA_Main_DynamicSim
[
    "OETA_Main_LockCamVehicle",
    "CHECKBOX",
    ["TFD Lock Camera in Vehicle", "Locks the camera to first-person inside vehicles. If not enabled it will enable it to default TFD Values. "],
    COMPONENT_NAME,
    false,
    true, {
        if (_this && {hasInterface}) then  { call FUNC(LockCamVehicle)};
    }
] call CBA_Settings_fnc_init;

// Dynamic Groups
[
    "OETA_Main_DynamicGroups",
    "CHECKBOX",
    ["BIS Dynamic Groups", "Enable Vanilla Dynamic Groups system (U Menu)"],
    COMPONENT_NAME,
    false,
    true, {
        if (_this) then { call FUNC(DynamicGroups)};
    }
] call CBA_Settings_fnc_init;
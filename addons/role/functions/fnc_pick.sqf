#include "script_component.hpp"

if (isDedicated) exitWith {};

////////////////////////////////////////////////////////////////////////////////////////////////
private _oetamakecom = [
    "oetamakecom",
    "Communications",
    "", {
        player call FUNC(makecom);
        [
                {player setVariable["draWhitelisted",TRUE,TRUE];},
                [draReady],
                5
            ] call CBA_fnc_waitAndExecute;
            [
                {player call {daoWhitelisted=true};player call {daoJTACmode=true};},
                [daoReady], 
                5
            ] call CBA_fnc_waitAndExecute;
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _oetamakecom] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _oetamakeeng = [
    "oetamakeeng",
    "Engineer",
    "", {
        player call FUNC(makeeng);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _oetamakeeng] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _oetamakemed = [
    "oetamakemed",
    "Medic",
    "", {
        player call FUNC(makemed);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _oetamakemed] call ACE_interact_menu_fnc_addActionToObject;


////////////////////////////////////////////////////////////////////////////////////////////////
private _oetamakewep = [
    "oetamakewep",
    "Weapons",
    "", {
        player call FUNC(makewep);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _oetamakewep] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _oetaFIX = [
    "oetafix",
    "FIX Perms",
    "", {
        player call FUNC(role);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _oetaFIX] call ACE_interact_menu_fnc_addActionToObject;

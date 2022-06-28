/*
 * ARMA EXTENDED ENVIRONMENT
 * \OETA_common\functions\addons\fn_getAddonWeapons.sqf
 * by Ojemineh
 *
 * get addon weapons
 *
 * Arguments:
 * 0: classname - <STRING>
 *
 * Return:
 * <ARRAY>
 *
 * Example:
 * ["oeta_common"] call OETA_common_fnc_getAddonWeapons;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_classname"];

_classname = [_this, 0, "", [""]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

private _return = [];

if (isClass (configfile >> "CfgPatches" >> _classname)) then {
    _return = getArray (configfile >> "CfgPatches" >> _classname >> "weapons");
};

_return;

/*
 * ARMA EXTENDED ENVIRONMENT
 * \oeta_core\functions\addons\fn_getAddonVersionArray.sqf
 * by Ojemineh
 *
 * get addon version array
 *
 * Arguments:
 * 0: classname - <STRING>
 *
 * Return:
 * <ARRAY>
 *
 * Example:
 * ["oeta_core"] call oeta_core_fnc_getAddonVersionArray;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_classname"];

_classname = [_this, 0, "", [""]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

private _return = [];

if (isClass (configfile >> "CfgPatches" >> _classname)) then {
    _return = getArray (configfile >> "CfgPatches" >> _classname >> "versionAr");
};

_return;

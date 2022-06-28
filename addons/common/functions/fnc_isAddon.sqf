/*
 * ARMA EXTENDED ENVIRONMENT
 * \OETA_common\functions\addons\fn_isAddon.sqf
 * by Ojemineh
 *
 * check if addon is available
 *
 * Arguments:
 * 0: classname - <STRING>
 *
 * Return:
 * <BOOLEAN>
 *
 * Example:
 * ["oeta_common"] call OETA_common_fnc_isAddon;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_classname"];

_classname = [_this, 0, "", [""]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

private _return = isClass (configfile >> "CfgPatches" >> _classname);

_return;

/*
 * ARMA EXTENDED ENVIRONMENT
 * \OETA_common\functions\addons\fn_getAddonVersion.sqf
 * by Ojemineh
 *
 * get addon version
 *
 * Arguments:
 * 0: classname - <STRING>
 *
 * Return:
 * <STRING>
 *
 * Example:
 * ["oeta_common"] call OETA_common_fnc_getAddonVersion;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_classname"];

_classname = [_this, 0, "", [""]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

private _return = "";

if (isClass (configfile >> "CfgPatches" >> _classname)) then {
    _return = getText (configfile >> "CfgPatches" >> _classname >> "version");
};

_return;

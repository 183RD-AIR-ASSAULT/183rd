#include "\z\oeta\addons\common\script_component.hpp"
/*
 * Name: OETA_common_fnc_checkOETAVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if OETA Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _oetaVersion = getMissionConfigValue ["oeta_version",[0,0,0]];

([_oetaVersion,_input] call EFUNC(common,checkVersionArray));


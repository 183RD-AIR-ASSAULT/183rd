/*
 * Name: oeta_core_fnc_sideToColor
 * Author: Snippers
 *
 * Arguments:
 * side
 *
 * Return:
 * array: color array
 *
 * Description:
 * Will return the color of the inputted side.
 */

//Cache vars for speed
if (isNil "oeta_core_blufor_color") then {
    oeta_core_blufor_color = [blufor] call bis_fnc_sideColor;
    oeta_core_opfor_color = [opfor] call bis_fnc_sideColor;
    oeta_core_indep_color = [independent] call bis_fnc_sideColor;
    oeta_core_civ_color = [civilian] call bis_fnc_sideColor;
    oeta_core_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {oeta_core_blufor_color};
    case opfor: {oeta_core_opfor_color};
    case independent: {oeta_core_indep_color};
    case civilian: {oeta_core_civ_color};
    default {oeta_core_empty_color};
};

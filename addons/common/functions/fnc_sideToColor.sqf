/*
 * Name: oeta_common_fnc_sideToColor
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
if (isNil "oeta_common_blufor_color") then {
    oeta_common_blufor_color = [blufor] call bis_fnc_sideColor;
    oeta_common_opfor_color = [opfor] call bis_fnc_sideColor;
    oeta_common_indep_color = [independent] call bis_fnc_sideColor;
    oeta_common_civ_color = [civilian] call bis_fnc_sideColor;
    oeta_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {oeta_common_blufor_color};
    case opfor: {oeta_common_opfor_color};
    case independent: {oeta_common_indep_color};
    case civilian: {oeta_common_civ_color};
    default {oeta_common_empty_color};
};
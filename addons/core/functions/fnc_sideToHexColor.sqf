/*
 * Name: oeta_core_fnc_sideTohexColor
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
if (isNil "oeta_core_blufor_hex_color") then {
    oeta_core_blufor_hex_color = oeta_core_blufor_color call BIS_fnc_colorRGBtoHTML;
    oeta_core_opfor_hex_color = oeta_core_opfor_color call BIS_fnc_colorRGBtoHTML;
    oeta_core_indep_hex_color = oeta_core_indep_color call BIS_fnc_colorRGBtoHTML;
    oeta_core_civ_hex_color = oeta_core_civ_color call BIS_fnc_colorRGBtoHTML;
    oeta_core_empty_hex_color = oeta_core_empty_color call BIS_fnc_colorRGBtoHTML;
};
switch _this do {
    case blufor: {oeta_core_blufor_hex_color};
    case opfor: {oeta_core_opfor_hex_color};
    case independent: {oeta_core_indep_hex_color};
    case civilian: {oeta_core_civ_hex_color};
    default {oeta_core_empty_hex_color};
};

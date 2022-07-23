#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "initSettings.sqf"

[QGVAR(enableSafety), {
    params ["_player"];

    [_player] call FUNC(lowerWeapon);

    if (EGVAR(common,aceSafemode) && {GVAR(startLocked)}) then {
        [_player, currentWeapon _player, true] call ACEFUNC(safemode,setWeaponSafety);
    };
}] call CBA_fnc_addEventHandler;

[QGVAR(lowerWeapon), {
    params ["_unit"];

    _unit action ["WeaponOnBack", _unit];

}] call CBA_fnc_addEventHandler;

ADDON = true;

// Handle default safestart setting
if (isServer && isOETA && !is3DEN && GVAR(enableDefaultSS) && entities QGVAR(module) isEqualTo []) then {
    if (GVAR(defaultSS) <= 0) then {
        [GVAR(defaultSS), true] call FUNC(set);
        LOG("Default safestart set to infinite");
    } else {
        private _duration = GVAR(defaultSS) + CBA_missionTime;
        [_duration, true] call FUNC(set);
        LOG_1("Default safestart set to %1",_duration);
    };
};

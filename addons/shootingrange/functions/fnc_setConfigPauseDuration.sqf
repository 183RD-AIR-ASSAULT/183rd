#include "script_component.hpp"
/*
 * Author: Jonpas
 * Sets shooting course pause duration.
 *
 * Arguments:
 * 0: Name <STRING>
 * 1: Controllers <ARRAY>
 * 2: Pause Duration <NUMBER>
 * 3: Targets <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["range", [controller1, controller2], 5, [target1, target2]] call OETA_shootingrange_fnc_setConfigPauseDuration;
 *
 * Public: No
 */

params ["_name", "_controllers", "_pauseDuration", "_targets"];
 {
    _x setVariable [QGVAR(pauseDuration), _pauseDuration, true];
} forEach _controllers;

// Notification
[_controllers select 0, _name, _targets] call FUNC(checkConfig);

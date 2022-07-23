#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: OETA_safestart_fnc_end

Description:
    Ends safestart

Parameters:
    _isGlobal - Whether to execute globally [Boolean, default false]

Returns:
    nil
Examples:
    (begin example)
        [true] call OETA_safestart_fnc_end
    (end)

Author:
    Freddo
---------------------------------------------------------------------------- */
params [["_isGlobal",false]];

if (_isGlobal) exitWith {[false] remoteExecCall [QFUNC(end),0,'ADDON']};

if !(isNil QGVAR(instance)) then {
    LOG("Ending safestart");
    GVAR(instance) call CBA_fnc_deletePerFrameHandlerObject;
};

nil

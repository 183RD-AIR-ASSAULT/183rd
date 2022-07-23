#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: OETA_safestart_fnc_isActive

Description:
    Checks whether safestart is active

Returns:
    Whether safestart is active [Boolean]

Examples:
    (begin example)
        _isActive = [] call OETA_safestart_fnc_isActive
    (end)

Author:
    Freddo
---------------------------------------------------------------------------- */

!isNil QGVAR(instance)

#include "script_component.hpp"

if (EGVAR(core,aceFastroping)) then {
    [
        QGVAR(autoAdd),
        "CHECKBOX",
        [LSTRING(autoAdd), LSTRING(autoAdd_Description)],
        COMPONENT_NAME,
        true,
        true
    ] call CBA_fnc_addSetting;
};

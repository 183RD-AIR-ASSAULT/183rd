#include "script_component.hpp"

ADDON = false;

#include "initCBASettings.sqf"

if (isNil QEGVAR(core,OETA_enabled) || !(EGVAR(core,OETA_enabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = true;

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "cba_xeh"
        };
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgBrains.hpp"
#include "Modes.hpp"
#include "CfgWeapons.hpp"

class CfgFunctions {
    #include "CfgFunctions.hpp"
};

class Extended_PreInit_EventHandlers {
    class GVAR(ai_Event) {
        init = "call compile preProcessFileLineNumbers 'z\oeta\addons\ai\XEH_preInit.sqf'";
    };
};


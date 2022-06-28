#include "script_component.hpp"

class CfgPatches {
    class OETA_AI {
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

class CfgFunctions {
    #include "CfgFunctions.hpp"
};

class Extended_PreInit_EventHandlers {
    class OETA_AI_Event {
        init = "call compile preProcessFileLineNumbers 'z\oeta\addons\AI\XEH_preInit.sqf'";
    };
};

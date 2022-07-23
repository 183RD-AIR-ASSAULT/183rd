#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_UI_F",
            "cba_main",
            "cba_xeh",
            "cba_ui",
            "cba_jr",
            "Markers"
        };
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "dialogs\CfgDisplays.hpp"

class CfgScriptPaths {
    OETADisplays = "z\oeta\addons\cuecard\Scripts\UI\Displays\";
};


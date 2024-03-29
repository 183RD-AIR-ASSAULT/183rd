#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"OETA_main","oeta_common"};
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


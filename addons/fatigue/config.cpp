#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "oeta_common"
        };
        author = "183rd";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"

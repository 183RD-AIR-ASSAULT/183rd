#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "oeta_main"
        };
        author = "183rd";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgCloudlets.hpp"

#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_diagnostic"
        };
        author = "183rd";
        VERSION_CONFIG;
    };
};

// Enable CBA target debugging
EnableTargetDebug = 1;

#include "CfgEventHandlers.hpp"

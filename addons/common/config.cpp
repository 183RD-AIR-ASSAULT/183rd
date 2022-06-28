#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "oeta_main"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "display3DEN.hpp"
#include "ui\RscModal.hpp"

class OETA_autotest {
    class GVAR(groupNamesSlottingScreen) {
        code = QUOTE([] call FUNC(testGroupsSlottingScreen));
    };
};

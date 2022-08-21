#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        author = QAUTHOR;
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"oeta_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Cfg3DEN.hpp"
#include "display3DEN.hpp"
#include "autotest.hpp"

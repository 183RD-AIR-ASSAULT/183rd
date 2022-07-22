#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"oeta_core"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "display3DEN.hpp"
#include "display3DENEditbox.hpp"

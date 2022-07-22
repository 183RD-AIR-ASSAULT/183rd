#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"oeta_core"};
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"

#include "defines.hpp"
#include "dialogs.hpp"

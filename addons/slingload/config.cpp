#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"oeta_main"};
        author = QAUTHOR;
        authors[] = {"ARK", "Jonpas"};
        url = URL;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

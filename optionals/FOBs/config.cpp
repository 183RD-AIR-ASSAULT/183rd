#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = QUOTE(COMPONENT_NAME);
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        version = VERSION;
        authors[] = {"Mokka"};
        weapons[] = {};
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgVehicles.hpp"
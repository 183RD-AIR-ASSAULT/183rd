#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "cba_xeh"
        };
        version = VERSION;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
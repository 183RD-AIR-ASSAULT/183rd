#include "script_component.hpp"


class CfgPatches {

    class OETA_Modules {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "oeta_core"
        };
        units[] = {};
        weapons[] = {};
        authors[] = {
            "O. Jemineh"
        };
        VERSION_CONFIG;
    };

};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"

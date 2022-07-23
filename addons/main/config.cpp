#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Tank_Loadorder",
            "cba_main",
            "cba_xeh",
            "cba_ui",
            "cba_jr"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWorlds.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgMarkers.hpp"
#include "CfgSettings.hpp"
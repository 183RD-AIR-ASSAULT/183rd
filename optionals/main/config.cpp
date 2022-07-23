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
            "cba_main",
            "cba_xeh",
            "cba_ui",
            "cba_jr"
        };
        VERSION_CONFIG;
    };
};



#include "CfgFactionClasses.hpp"

#include "CfgSettings.hpp"

#include "CfgRespawnTemplates.hpp"
// #include "CfgEventHandlers.hpp"
// #include "CfgFunctions.hpp"
#include "CfgEditorCategories.hpp"

#include "CfgWorlds.hpp"
#include "CfgMarkers.hpp"
#include "radio.hpp"
#include "CfgSkeletons.hpp"
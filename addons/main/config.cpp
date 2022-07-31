#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        author = "183rd";
        VERSION_CONFIG;
    };
};

#include "CfgEden.hpp"
#include "DisplayEden.hpp"
#include "CfgWorlds.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgMarkers.hpp"
#include "CfgRespawnTemplates.hpp"
#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {QGVAR(module),QGVAR(deploy)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"oeta_core"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModules.hpp"


class CfgWaypoints {
    class Teamwork {
        displayName = "183rd";
        class Paradrop {
            displayName = "Paradrop";
            file = "\z\oeta\addons\teleport\functions\fnc_paradropWaypoint.sqf";
            icon = "\a3\air_f_beta\Parachute_01\Data\UI\map_parachute_01_ca.paa";
            class Attributes {
            };
        };
    };
};

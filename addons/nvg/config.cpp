#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "oeta_common",
            "cba_main",
            "ace_nightvision",
            "ace_compat_rhs_usf3",
            "ace_compat_rhs_afrf3",
            "BettIR_Core"
        };
        author = "183rd";
        authors[] = {"PDT"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgEffects.hpp"
#include "CfgWeapons.hpp"
#include "BettIR.hpp"
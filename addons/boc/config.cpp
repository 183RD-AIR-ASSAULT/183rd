#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "OETA_boc_moduleAdd",
            "OETA_boc_moduleOnChest",
            "OETA_boc_weaponHolder"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OETA_main",
            "a3_ui_f",
            "A3_Modules_F",
            "ace_main",
            "ace_common",
            "ace_movement"
        };
        author = "NemesisRE";
        authors[] = {"DerZade"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"

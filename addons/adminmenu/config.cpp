#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "Bear, Snippers";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"oeta_core", "A3_UI_F", "cba_diagnostic"};
        VERSION_CONFIG;
    };
};

// SteamID64 of players authorized to access admin tools (matches against getPlayerUID)
class GVAR(authorized_players) {
    class ADMIN_YonV {
        uid = "76561198000002705";
    };
    class ADMIN_Devin {
        uid = "76561198020655265";
    };
    class ADMIN_Digger {
        uid = "76561198135204306";
    };
    class ADMIN_Alex {
        uid = "76561198300692603";
    };
    class ADMIN_Summers {
        uid = "76561198015722757";
    };
};

#include "CfgFunctions.hpp"
#include "CfgDebriefing.hpp"
#include "CfgEventHandlers.hpp"
#include "autotest.hpp"
#include "gui\adminMenu.hpp"

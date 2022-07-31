#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = QAUTHOR;
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"oeta_common", "A3_UI_F", "cba_diagnostic"};
        VERSION_CONFIG;
    };
};

// SteamID64 of players authorized to access admin tools (matches against getPlayerUID)
class GVAR(authorized_players) {
    class YONV {
        uid = "76561198000002705";
    };
    class DEVIN {
            uid = "76561198020655265";
        };
    class DIGGER {
            uid = "76561198135204306";
        };
    class ALEX {
            uid = "76561198300692603";
        };
    class SUMMERS {
            uid = "76561198015722757";
        };
    class FOX {
            uid = "76561198283975252";
        };
    class FORESTER {
            uid = "76561198146946410";
        };
    class IROH {
            uid = "76561198994904932";
        };
    class RESJA {
            uid = "76561198058838936";
        };
};

#include "CfgFunctions.hpp"
#include "CfgDebriefing.hpp"
#include "CfgEventHandlers.hpp"
#include "autotest.hpp"

#include "gui\adminMenu.hpp"

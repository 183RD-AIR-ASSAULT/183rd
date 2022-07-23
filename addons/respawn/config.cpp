#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"oeta_core"};
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"

#include "defines.hpp"
#include "dialogs.hpp"


class CfgRespawnTemplates {
    class OETA_RespawnOnStartPosition {
        displayName = "183rd Respawn on Start Position";
        onPlayerRespawn = "z\oeta\addons\respawn\RespawnOnStartPosition.sqf";
        respawnDelay = 10;
        respawnOnStart = 0;
    };
};
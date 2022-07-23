#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"OETA_main"};
        authors[] = {"Olsen","PiZZADOX","Sacher","TheMagnetar","TrainDoc","TinfoilHate"};
        author = AUTHOR;
        url = URL;
        VERSION_CONFIG;
    };
};

#include "\z\oeta\addons\main\RscTitles.hpp"
#include "CfgEventHandlers.hpp"
#include "RscTitles.hpp"
#include "CfgVehicles.hpp"
#include "Cfg3DEN.hpp"
#include "CfgCustom\RespawnTemplates.hpp"
#include "cfgDebriefingSections.hpp"
#include "ui\RscModal.hpp"

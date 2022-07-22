#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OETA_main",
            "OETA_core",
            "OETA_aidrivers",
            "OETA_antind",
            "OETA_autotrack",
            "OETA_briefing",
            "OETA_capturezone",
            "OETA_covermap",
            "OETA_hostage",
            "OETA_gear",
            "OETA_markercontrol",
            "OETA_objectsettings",
            "OETA_safestart",
            "OETA_selfactions",
            "OETA_setuptimer",
            "OETA_shotcount",
            "OETA_startinparachute",
            "OETA_starttext",
            "OETA_teamcolour"
        };
        authors[] = {"Olsen","PiZZADOX","Sacher"};
        author = AUTHOR;
        authorUrl = "https://github.com/PiZZAD0X/OETA";
        VERSION_CONFIG;
    };
};

#include "\z\oeta\addons\main\RscTitles.hpp"
#include "CfgEventHandlers.hpp"
#include "Cfg3DEN.hpp"

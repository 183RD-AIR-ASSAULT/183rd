#include "script_component.hpp"

class CfgPatches {
    class OETAFundamentals_Channels {

        author = QAUTHOR;
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers {
    class OETAFundamentals_Channels_Event {
        init = "call compile preprocessFileLineNumbers 'z\oeta\addons\channels\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class OETA_AI_Event {
        init = "call compile preprocessFileLineNumbers 'z\oeta\addons\channels\XEH_postInit.sqf'";
    };
};

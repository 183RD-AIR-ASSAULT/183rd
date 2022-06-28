#include "script_component.hpp"

class CfgPatches {
    class OETA_Player {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_UI_F",
            "cba_main",
            "cba_xeh",
        };
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

#include "Cfg3DEN.hpp"

#include "CfgEventHandlers.hpp"

class CfgImprecision {
    class Primary {
        verticalRadius = 0.1;
        horizontalRadius = 0.05;
    };
    class Secondary {
        verticalRadius = 0.05;
        horizontalRadius = 0.1;
    };
};

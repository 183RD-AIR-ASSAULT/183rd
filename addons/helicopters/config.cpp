#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "oeta_main",
            "vtx_UH60",
            "vtx_main"
        };
        units[] = {};
        weapons[] = {};
        authors[] = {
            "YonV"
        };
        VERSION_CONFIG;
    };
};

#include "edenAttributes.hpp"

class CBA_Extended_EventHandlers_base;
class CfgVehicles {
    class vtx_MH60M;
    class vtx_MH60M_DAP;

    class GVAR(vtx_MH60M): vtx_MH60M {
        scope=2;
        #include "edenAttributes.hpp"
        hiddenSelectionsTextures[]= {
            "",  //DNU (Do not Use)
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //hull
            "", // misc
            "",  //tail
            "\z\oeta\addons\helicopters\data\markings_totem_ca.paa",
            "", //left_num_1
            "", //left_num_2
            "", //right_num_1
            "", //right_num_2
            "z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa" //Fuel Probe
        };
        displayName = "[183rd] MH-60M";
        init = "this setVariable ['ace_medical_medicClass',1];";
        class EventHandlers {
            init = "this setVariable ['ace_medical_medicClass',1];";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class GVAR(uh60M_DAP): vtx_MH60M_DAP {
        scope=2;
        #include "edenAttributes.hpp"
        hiddenSelectionsTextures[]= {
            "",  //DNU (Do not Use)
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //hull
            "", // misc
            "",  //tail
            "\z\oeta\addons\helicopters\data\markings_totem_ca.paa",
            "", //left_num_1
            "", //left_num_2
            "", //right_num_1
            "", //right_num_2
            "z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa" //Fuel Probe
        };
        displayName = "[183rd] MH-60M DAP";
        init = "this setVariable ['ace_medical_medicClass',1];";
        class EventHandlers {
            init = "this setVariable ['ace_medical_medicClass',1];";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class GVAR(uh60M_med): vtx_MH60M {
        scope=2;
        #include "edenAttributes.hpp"
        hiddenSelectionsTextures[]= {
            "",  //DNU (Do not Use)
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "",  //DNU 
            "\z\oeta\addons\helicopters\data\Hull_Main_med.paa",
            "", // misc
            "\z\oeta\addons\helicopters\data\Hull_Tail_med.paa",
            "\z\oeta\addons\helicopters\data\markings_183.paa",
            "", //left_num_1
            "", //left_num_2
            "", //right_num_1
            "", //right_num_2
            "z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa" //Fuel Probe
        };
        displayName="[183rd] MH60M Med";
        init = "this setVariable ['ace_medical_medicClass',1];";
        class EventHandlers {
            init = "this setVariable ['ace_medical_medicClass',1];";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };
};

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "OETA_MorphineItem",
            "OETA_epinephrineItem",
            "OETA_fentanylItem",
            "OETA_naloxonelItem",
            "OETA_ketamineItem",
            "OETA_ApapItem"
        };

        weapons[] = {
            "OETA_naloxone",
            "OETA_fentanyl",
            "OETA_ketamine",
            "OETA_ketamine_200mg",
            "OETA_tetra",
            "OETA_Apap",
            "OETA_VPN",
            "OETA_NDC"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "oeta_common",
            "ace_medical",
            "ace_medical_engine",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals",
            "kat_main",
            "kat_airway",
            "kat_breathing",
            "kat_circulation"
        };
        author = QAUTHOR;
        authors[] = {"OETA J4"};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"

#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"

// #include "configs\ACE_Medical_Statemachine.hpp"
#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"

#include "configs\ZEN_Context_Actions.hpp"


class CfgFunctions {
    class ace_medical_statemachine {
        tag = "ace_medical_statemachine";
        class Functions {
            class handleStateCardiacArrest {

            file="z\oeta\addons\medical\function_overwrites\fn_handleStateCardiacArrest.sqf";
            };
        };
    };
};

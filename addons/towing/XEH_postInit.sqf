#include "script_component.hpp"

if (!isServer || {!EGVAR(common,aceTowing)}) exitWith {};

if (GVAR(addToHeavyDutyVehicles)) then {
    {
        [_x, "initPost", {
            params ["_vehicle"];
            _vehicle addItemCargoGlobal ["ACE_rope12", 2];
            _vehicle addItemCargoGlobal ["ACE_rope27", 1];
            _vehicle addItemCargoGlobal ["oeta_medbags_FirstAid", 4];
        }, true, [], true] call CBA_fnc_addClassEventHandler;
    } forEach [
        "Tank_F",
        "Wheeled_APC_F",
        "MRAP_01_base_F",
        "MRAP_02_base_F"
    ];
};

if (GVAR(addToCars)) then {
    ["Car_F", "initPost", {
        params ["_vehicle"];
        _vehicle addItemCargoGlobal ["ACE_rope6", 2];
        _vehicle addItemCargoGlobal ["ACE_rope12", 1];
        _vehicle addItemCargoGlobal ["ACE_EarPlugs", 2];
        _vehicle addItemCargoGlobal ["ACE_Flashlight_MX991", 1];
        _vehicle addItemCargoGlobal ["Chemlight_green", 4];
        _vehicle addItemCargoGlobal ["ACE_bodyBag", 2];
        _vehicle addItemCargoGlobal ["ToolKit", 1];
        _vehicle addItemCargoGlobal ["oeta_medbags_FirstAid", 4];
    }, true, ["MRAP_01_base_F", "MRAP_02_base_F"], true] call CBA_fnc_addClassEventHandler;
};


if (GVAR(medicalvehicle)) then {
    {
        [_x, "initPost", {
            params ["_vehicle"];
            _vehicle addItemCargoGlobal ["ACE_rope6", 2];
        _vehicle addItemCargoGlobal ["ACE_rope12", 1];
        _vehicle addItemCargoGlobal ["oeta_medbags_FirstAid", 4];
        _vehicle addItemCargoGlobal ["ACE_EarPlugs", 2];
        _vehicle addItemCargoGlobal ["ACE_Flashlight_MX991", 1];
        _vehicle addItemCargoGlobal ["Chemlight_green", 4];
        _vehicle addItemCargoGlobal ["ACE_bodyBag", 2];
        _vehicle addItemCargoGlobal ["ToolKit", 1];
        _vehicle addItemCargoGlobal ["Attachable_Helistretcher", 2];
        _vehicle addItemCargoGlobal ["OETA_medbags_MedicKit", 1];
        _vehicle addItemCargoGlobal ["ACE_surgicalKit", 4];
        _vehicle addItemCargoGlobal ["kat_accuvac", 2];
        _vehicle addItemCargoGlobal ["ACE_personalAidKit", 1];
        _vehicle addItemCargoGlobal ["oeta_medbags_Trauma", 4];
        }, true, [], true] call CBA_fnc_addClassEventHandler;
    } forEach [
        "oeta_helicopters_uh60M_med", 
        "vtx_UH60M_MEDEVAC", 
        "rhsusf_M1230a1_usarmy_d", 
        "rhsusf_M1230a1_usarmy_wd", 
        "rhsusf_m113_usarmy_medical", 
        "RHS_UH60M_MEV", 
        "RHS_UH60M_MEV2", 
        "RHS_UH60M_MEV_d", 
        "RHS_UH60M_MEV2_d", 
        "rhsusf_m113d_usarmy_medical"
    ];
};

if (GVAR(helicopter)) then {
    {
        [_x, "initPost", {
            params ["_vehicle"];
            _vehicle addItemCargoGlobal ["ACE_rope6", 2];
        _vehicle addItemCargoGlobal ["ACE_rope12", 1];
        _vehicle addItemCargoGlobal ["ACE_EarPlugs", 2];
        _vehicle addItemCargoGlobal ["ACE_Flashlight_MX991", 1];
        _vehicle addItemCargoGlobal ["Chemlight_green", 4];
        _vehicle addItemCargoGlobal ["ACE_bodyBag", 2];
        _vehicle addItemCargoGlobal ["ToolKit", 1];
        _vehicle addItemCargoGlobal ["oeta_medbags_FirstAid", 4];
        }, true, [], true] call CBA_fnc_addClassEventHandler;
    } forEach [
        "Helicopter_Base_H"
    ];
};


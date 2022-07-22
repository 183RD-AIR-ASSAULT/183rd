#include "script_component.hpp"
// Reporting ai
[
    "oeta_ai_Reporting",
    "CHECKBOX",
    ["Spawn Reporting", "Receive a systemchat message for any groups or vehicles that fail to spawn."],
    COMPONENT_NAME,
    false,
    true, {

    }
] call CBA_fnc_addSetting;

// Initial ai
[
    "oeta_ai_Initialai",
    "CHECKBOX",
    ["Include Initial ai", "This will automatically apply to ai Spawns and Zeus placed ai. If enabled it will also apply to any Editor placed ai at mission start."],
    COMPONENT_NAME,
    true,
    true, {
        if (_this && { isserver }) then  { call oeta_fnc_SetInitialai};
    }
] call CBA_fnc_addSetting;

// ai Aiming Accuracy
[
    "oeta_ai_AimingAccuracy",
    "SLIDER",
    ["Min Aiming Accuracy", "Higher value means the ai will be more likely to hit the target."],
    COMPONENT_NAME,
    [0, 1, 0.10, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// ai Aiming Shake
[
    "oeta_ai_AimingShake",
    "SLIDER",
    ["Min Aiming Shake", "Higher value means the ai will be more precise."],
    COMPONENT_NAME,
    [0, 1, 0.45, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// ai Aiming Speed
[
    "oeta_ai_AimingSpeed",
    "SLIDER",
    ["Min Aiming Speed", "Higher value means the ai can rotate and stabilize its aim faster."],
    COMPONENT_NAME,
    [0, 1, 0.30, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// ai Commanding
[
    "oeta_ai_Commanding",
    "SLIDER",
    ["Commanding", "Higher value means the ai can report targets faster."],
    COMPONENT_NAME,
    [0, 1, 1.00, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// ai Courage
[
    "oeta_ai_Courage",
    "SLIDER",
    ["Courage", "Higher value means the ai can report targets faster."],
    COMPONENT_NAME,
    [0, 1, 1.00, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// ai General
[
    "oeta_ai_General",
    "SLIDER",
    ["General", "Higher value improves the ai's decision making."],
    COMPONENT_NAME,
    [0, 1, 1.00, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// ai Min Reload Speed
[
    "oeta_ai_ReloadSpeed",
    "SLIDER",
    ["Min Reload Speed", "Higher value means the ai can switch or reload weapons faster."],
    COMPONENT_NAME,
    [0, 1, 0.50, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// ai Min Spot Distance
[
    "oeta_ai_SpotDistance",
    "SLIDER",
    ["Min Spot Distance", "Higher value means the ai is better at spotting targets."],
    COMPONENT_NAME,
    [0, 1, 0.40, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// ai Min Spot Time
[
    "oeta_ai_SpotTime",
    "SLIDER",
    ["Min Spot Time", "Higher value means the ai will react faster to death, damage or enemies."],
    COMPONENT_NAME,
    [0, 1, 0.20, 2],
    true, {

    }
] call CBA_fnc_addSetting;

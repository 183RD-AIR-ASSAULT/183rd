// https://cbateam.github.io/CBA_A3/docs/files/settings/fnc_addSetting-sqf.html

[
    QGVAR(soundEnabled),
    "CHECKBOX",
    ["Enable Safestart Sounds", "Whether to make countdown sounds during the last few seconds"],
    COMPONENT_NAME,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(handleAI),
    "CHECKBOX",
    ["Disable AI during safestart", "Whether to disable AI damage and targetting during safestart"],
    COMPONENT_NAME,
    true,
    1,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(triggerSound),
    "CHECKBOX",
    ["Dry fire sound", "Whether to make a sound when attempting to fire while safestart is active"],
    COMPONENT_NAME,
    false,
    1
] call CBA_fnc_addSetting;

[
    QGVAR(enableDefaultSS),
    "CHECKBOX",
    ["Enable default safestart", "If no safestart module is placed, this will be used."],
    COMPONENT_NAME,
    false,
    1,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(defaultSS),
    "TIME",
    ["Default safestart duration", "0 for infinite"],
    COMPONENT_NAME,
    [0,1800,120],
    1,
    {},
    true
] call CBA_fnc_addSetting;


if (EGVAR(common,aceSafemode)) then {
    [
        QGVAR(startLocked),
        "CHECKBOX",
        [LSTRING(StartLocked), LSTRING(StartLocked_Description)],
        COMPONENT_NAME,
        true,
        2
    ] call CBA_fnc_addSetting;
};

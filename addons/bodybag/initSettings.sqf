[
    QGVAR(destroyChance),
    "SLIDER",
    [LSTRING(DestroyChance), LSTRING(DestroyChanceDesc)],
    COMPONENT_NAME,
    [0, 100, DESTROY_CHANCE_DEFAULT, 0],
    true
] call CBA_fnc_addSetting;

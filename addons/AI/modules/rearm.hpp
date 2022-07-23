class GVAR(Rearm): Module_F {
    scope = 2;
    displayName = "Rearm Area";
    category = QEGVAR(main,AI);
    icon = "\z\oeta\addons\media\images\183rd.paa";
    function = QFUNC(rearmInit);
    // 0 for server only execution, 1 for global execution, 2 for persistent global execution
    isGlobal = 2;
    isTriggerActivated = 1;
    isDisposable = 0; // broken in EDEN;
    canSetArea = 1;
    class Attributes {
    };
    class AttributeValues {
        size3[] = {10,10,-1};
        isRectangle = 1;
    };
};

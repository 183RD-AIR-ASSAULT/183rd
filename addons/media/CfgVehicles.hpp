class CfgVehicles {
    class Flag_White_F;
    class OETA_Flag_White: Flag_White_F {
        author="Mokka";
        editorPreview="\z\oeta\addons\media\images\183rd.paa";
        _generalMacro="OETA_Flag_White";
        displayName="Flag (Last Resort Gaming, White)";
        class EventHandlers {
            init="(_this select 0) setFlagTexture ""\z\oeta\addons\media\images\183rd.paa""";
        };
    };
    class OETA_Flag_Black: Flag_White_F {
        author="Mokka";
        editorPreview="\z\oeta\addons\media\images\183rd.paa";
        _generalMacro="OETA_Flag_Black";
        displayName="Flag (Last Resort Gaming, Black)";
        class EventHandlers {
            init="(_this select 0) setFlagTexture ""\z\oeta\addons\media\images\183rd.paa""";
        };
    };
};

class CfgVehicles {
    class Module_F;
    class ModuleEmpty_F;
    class All;
    class Thing: All {
    };
    class ModuleEmpty_F: Thing {
    };

    class Logic;
    class Module_F: Logic {
        class ModuleDescription {
            class AnyPlayer;
            class AnyBrain;
            class EmptyDetector;
        };
    };

    class oeta_Module_Base: Module_F {
        mapSize = 1;
        side = 7;

        scope = 1;
        scopeCurator = 1;

        author = AUTHOR;
        displayName = "oeta Module Base";
        vehicleClass = "Modules";
        category = PREFIX;

        function = "";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;

        class Arguments {
        };

        class ModuleDescription: ModuleDescription {
            description = "oeta Module Base";
        };
    };

    class oeta_Module_ToggleUndercover: oeta_Module_Base {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_ToggleUndercover";
        displayName = "Toggle Undercover";
        function = "oeta_zeus_fnc_ModuleToggleUndercover";
    };

    class oeta_Module_ToggleTranslator: oeta_Module_Base {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_ToggleTranslator";
        displayName = "Toggle Translator";
        function = "oeta_zeus_fnc_ModuleToggleTranslator";
    };
/*
// Made redundant by ZEN & 3DEN Enhanced
    class oeta_Module_CopyClipboardLoadout: oeta_Module_Base {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_CopyClipboardLoadout";
        displayName = "Copy Loadout";
        function = "oeta_zeus_fnc_ModuleCopyClipboardLoadout";
    };
	
// Made redundant by ZEN & 3DEN Enhanced
    class oeta_Module_PasteClipboardLoadout: oeta_Module_Base {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_PasteClipboardLoadout";
        displayName = "Paste Loadout";
        function = "oeta_zeus_fnc_ModulePasteClipboardLoadout";
    };

// Made redundant by "Rotate Objects" module.
    class oeta_Module_Flatten: oeta_Module_Base {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_Flatten";
        displayName = "Flatten";
        function = "oeta_zeus_fnc_ModuleFlatten";
    };
	
// Made redundant by ZEN's "Convoy Parameters" module.
    class oeta_Module_ConvoyGroup: oeta_Module_Base {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_ConvoyGroup";
        displayName = "Convoy Group";
        function = "oeta_zeus_fnc_ModuleConvoyGroup";
    };
*/
    class oeta_Module_ShowHitPoints: oeta_Module_Base {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_ShowHitPoints";
        displayName = "Show Hit Points";
        function = "oeta_zeus_fnc_ModuleShowHitPoints";
    };

    class oeta_Module_JamWeapon: oeta_Module_Base {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_JamWeapon";
        displayName = "Jam Weapon";
        function = "oeta_zeus_fnc_ModuleJamWeapon";
    };

    class oeta_Module_ModuleGenerateUnitConfig: oeta_Module_Base {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_ModuleGenerateUnitConfig";
        displayName = "Loadout To Config";
        function = "oeta_zeus_fnc_ModuleGenerateUnitConfig";
    };

    class oeta_Module_PowerGrid: oeta_Module_Base {
        scope = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_PowerGrid";
        displayName = "Power Grid";
        function = "oeta_zeus_fnc_ModulePowerGrid";
    };
    class oeta_Module_PowerGenerator: oeta_Module_Base {
        scope = 2;
        isGlobal = 1;

        _generalMacro = "oeta_Module_PowerGenerator";
        displayName = "Power Generator";
        function = "oeta_zeus_fnc_ModulePowerGenerator";
    };
    class oeta_Module_DisableAI: oeta_Module_Base {
        scope = 2;
        scopeCurator = 2;
        isGlobal = 1;
        isTriggerActivated = 1;

        _generalMacro = "oeta_Module_DisableAI";
        displayName = "Disable AI Pathing";
        function = "oeta_zeus_fnc_ModuleDisableAI";
    };
    class oeta_Module_EnableAI: oeta_Module_Base {
        scope = 2;
        scopeCurator = 2;
        isGlobal = 1;
        isTriggerActivated = 1;

        _generalMacro = "oeta_Module_EnableAI";
        displayName = "Enable AI Pathing";
        function = "oeta_zeus_fnc_ModuleEnableAI";
    };
    class oeta_Module_RevealPlayers: oeta_Module_Base {
        scope = 2;
        scopeCurator = 2;
        isGlobal = 1;
        isTriggerActivated = 1;

        _generalMacro = "oeta_Module_RevealPlayers";
        displayName = "Reveal Players";
        function = "oeta_zeus_fnc_ModuleRevealPlayers";
    };
    class oeta_Module_ForgetPlayers: oeta_Module_Base {
        scope = 2;
        scopeCurator = 2;
        isGlobal = 1;
        isTriggerActivated = 1;

        _generalMacro = "oeta_Module_ForgetPlayers";
        displayName = "Forget Players";
        function = "oeta_zeus_fnc_ModuleForgetPlayers";
    };
    class ModuleCurator_F: Module_F {
        class Attributes {
            class OETA_Config_Zeus {
                property = QUOTE(OETA_Config_Zeus);
                control = "Checkbox";
                typeName = "BOOL";
                displayName = "183rd Air Assault Unit [183rd]: Config Zeus:";
                tooltip = "Enable to allow this Zeus to have placed units use OETA AI Difficulty Settings (Settings - Addon Options)";
                expression = "if (_value isequalto true) then {[_this] call oeta_fnc_ConfigZeus;}";
                condition = "logicModule";
                defaultValue = "(true)";
            };
        };
    };
};

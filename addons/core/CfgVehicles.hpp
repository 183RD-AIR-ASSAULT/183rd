class CfgVehicles {
    class All {
        class EventHandlers {
        };
    };
    class Logic;
    class Module_F: Logic {
        class EventHandlers;
        class ArgumentsBaseUnits {
            class Units;
        };
        class ModuleDescription {
            class AnyPlayer;
            class AnyBrain;
            class EmptyDetector;
        };
        class AttributesBase {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;
        };
    };

    class GVAR(BaseModule): Module_F {
        category = QEGVAR(main,FRAME);
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        scope = 1;
        icon = "\a3\3DEN\Data\CfgWaypoints\scripted_ca.paa";
        editorCategory = QGVAR(Category);
        editorSubCategory = QGVAR(SubCategory);
    };

    #include "cfgVehicles\ExtractModule.hpp"
    #include "cfgVehicles\RespawnModule.hpp"
};

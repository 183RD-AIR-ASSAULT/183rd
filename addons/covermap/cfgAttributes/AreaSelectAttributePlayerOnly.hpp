class GVAR(AreaSelectAttributePlayerOnly): Combo {
    onLoad = QUOTE(_this call EFUNC(Core,PlayerOnlyOnLoad));
    attributeLoad = QUOTE([ARR_3(_this,_value,_config)] call FUNC(AreaSelectPlayerAttribute_attr_load));
    attributeSave = QUOTE([ARR_2(_this,_config)] call FUNC(AreaSelectPlayerAttribute_attr_save));
    class Controls: Controls {
        class Title: Title {};
        class Value: Value {};
    };
};
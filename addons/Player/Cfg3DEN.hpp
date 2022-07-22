class ctrlToolbox;

class Cfg3den {
    class Attributes {
        class Default;
        class Title: Default {
            class Controls {
                class Title;
            };
        };
        // class GroupSelect: Title {
        //     attributeLoad = "(_this controlsGroupCtrl 100) lbSetCurSel (((_value + 1) min 8) max 0);";
        //     attributeSave = "(lbCurSel (_this controlsGroupCtrl 100)) - 1";
        //     class Controls: Controls {
        //         class Title: Title {};
        //         class Value: ctrlToolbox {
        //             idc = 100;
        //             style = "0x02";
        //             x = "48 * (pixelW * pixelGrid * 0.50)";
        //             w = "75 * (pixelW * pixelGrid * 0.50)";
        //             h = "5 * (pixelH * pixelGrid * 0.50)";
        //             rows = 1;
        //             columns = 9;
        //             strings[] = {"NONE", "C2", "1PT", "2PT", "3PT", "4PT", "SUP", "AVI"};
        //         };
        //     };
        // };
        // class SquadSelect: Title {
        //     attributeLoad = "(_this controlsGroupCtrl 101) lbSetCurSel (((_value + 1) min 8) max 0);";
        //     attributeSave = "(lbCurSel (_this controlsGroupCtrl 100)) - 1";
        //     class Controls: Controls {
        //         class Title: Title {};
        //         class Value: ctrlToolbox {
        //             idc = 101;
        //             style = "0x02";
        //             x = "48 * (pixelW * pixelGrid * 0.50)";
        //             w = "75 * (pixelW * pixelGrid * 0.50)";
        //             h = "5 * (pixelH * pixelGrid * 0.50)";
        //             rows = 1;
        //             columns = 6;
        //             strings[] = {"None", "1st", "2nd", "3rd", "4th", "HQ"};
        //         };
        //     };
        // };
    };
    class Object {
        class AttributeCategories {
            class PREFIX {
                displayName = "183rd Player Options";
                collapsed = 1;
                class Attributes {
                    // class OETAGroup_Preset {
                    //     property = QUOTE(OETA_Group_Preset);
                    //     control = "GroupSelect";
                    //     displayName = "183rd Platoon Preset:";
                    //     tooltip = "Default Preset for Patches & TFAR Radio Frequencies.";
                    //     expression = "player setVariable ['Platoon183', _value, true];";
                    //     typeName = "STRING";
                    //     condition = "objectBrain";
                    //     defaultValue = "-1";
                    // };
                    // class OETASquad_Preset {
                    //     property = QUOTE(OETA_Squad_Preset);
                    //     control = "SquadSelect";
                    //     displayName = "183rd Squad Preset:";
                    //     tooltip = "Default Preset for Patches & TFAR Radio Frequencies.";
                    //     expression = "player setVariable ['Squad183', _value, true];";
                    //     typeName = "STRING";
                    //     condition = "objectBrain";
                    //     defaultValue = "-1";
                    // };
                    class OETAPilot {
                        property = QUOTE(OETAPilot);
                        control = "Checkbox";
                        displayName = "Pilot";
                        tooltip = "Set the player to Pilot to allow them in the Pilot seat of aircraft.";
                        expression = "_this setUnitTrait ['Pilot', _value, true];";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                    class OETAMission_Maker {
                        property = QUOTE(OETAMission_Maker);
                        control = "Checkbox";
                        displayName = "Mission Maker";
                        tooltip = "Define this player as Mission Maker to allow access to further mission controls.";
                        expression = "_this setUnitTrait ['Mission Maker', _value, true];";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                    class OETAInstructor {
                        property = QUOTE(OETAInstructor);
                        control = "Checkbox";
                        displayName = "Instructor";
                        tooltip = "Define this player as Instructor to allow access to any valid Instructor Controls - Only used with Training Functions.";
                        expression = "_this setUnitTrait ['Instructor', _value, true];";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                    class OETA_DefaultLoadout {
                        property = QUOTE(OETA_DefaultLoadout);
                        control = "Checkbox";
                        displayName = "183rd Preset Loadout";
                        tooltip = "Use Preset Loadout for this player type if available.";
                        expression = "if (_value IsEqualTo true) then { [_this] call OETA_fnc_Loadouts;}";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                };
            };
        };
    };
};

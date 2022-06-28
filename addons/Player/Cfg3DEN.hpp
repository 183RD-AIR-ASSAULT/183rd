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
        //         class Value: ctrlListbox {
        //             idc = 100;
        //             style = "0x02";
        //             x = "48 * (pixelW * pixelGrid * 0.50)";
        //             w = "75 * (pixelW * pixelGrid * 0.50)";
        //             h = "5 * (pixelH * pixelGrid * 0.50)";
        //             rows = 1;
        //             columns = 8;
        //             strings[] = {"None", "1pt", "2pt", "3pt", "4pt", "sup", "avi","hq"};
        //         };
        //     };
        // };
    };
    class Object {
        class AttributeCategories {
            class PREFIX {
                collapsed = 1;
                class Attributes {
                    // class OETAGroup_Preset {
                    //     property = QUOTE(OETA_Group_Preset);
                    //     control = "GroupSelect";
                    //     displayName = "183rd Preset Group:";
                    //     tooltip = "Default Preset for Patches & TFAR Radio Frequencies.";
                    //     expression = "[_this, _value] call OETA_Player_fnc_ConfigPlayer;";
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
                };
            };
        };
    };
};

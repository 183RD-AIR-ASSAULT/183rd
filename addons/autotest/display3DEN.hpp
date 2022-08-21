class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class GVARMAIN(Folder) {
                    items[] += {ADDON};
                };
                class ADDON {
                    text = "OETA Autotest";
                    action = QUOTE(edit3DENMissionAttributes QQGVAR(Attributes););
                    //picture = "\z\oeta\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};

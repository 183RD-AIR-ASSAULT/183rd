class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip  {
            class Items  {
                class PREFIX {
                    items[] += {ADDON};
                };
                class ADDON {
                    text = "183RD  Autotest";
                    action = QUOTE(edit3DENMissionAttributes QQGVAR(Attributes););
                    //picture = "\z\oeta\addons\core\UI\icon_gear_ca";
                };
            };
        };
    };
};

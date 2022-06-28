class ctrlMenuStrip;
class ctrlControlsGroupNoScrollbars;
class ctrlCheckboxToolbar;
class Separator1;

class display3den {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                items[] += {PREFIX};
                class PREFIX {
                    text = "183rd";
                    items[] = {"OETA_Documentation"};
                };
                class OETA_Documentation {
                    text = "183rd Docs"; // engine adds ... to links
                    data = "HelpFeedback";
                    picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
                    weblink = "http://arma.wiki";
                    opensNewWindow = 1;
                };
            };
        };
        class Toolbar: ctrlControlsGroupNoScrollbars {
            class Controls {
                class Separator3: Separator1 {
                    colorBackground[]={0,0,0,0.5};
                    x="33.5 *     (    5 * (pixelW * pixelGrid *     0.50))";
                    y="1 * (pixelH * pixelGrid *     0.50)";
                    w="pixelW";
                    h="(    5 * (pixelH * pixelGrid *     0.50))";
                };
                class OETA_Toolbar_Controls: ctrlControlsGroupNoScrollbars {
                    idc=-1;
                    x="34.5 * (5 * (pixelW * pixelGrid *     0.50))";
                    y="1 * (pixelH * pixelGrid *     0.50)";
                    w="5 *     (    5 * (pixelW * pixelGrid *     0.50))";
                    h="(    5 * (pixelH * pixelGrid *     0.50))";
                    class Controls {
                        class Garrison: ctrlCheckboxToolbar {
                            idc=-1;
                            onCheckedChanged=QUOTE(GVAR(Garrison) = !GVAR(Garrison));
                            onLoad="uiNamespace setVariable [""oeta_common_GarrisonControl"",_this select 0]; oeta_common_Garrison = false";
                            x="0 *     (    5 * (pixelW * pixelGrid *     0.50))";
                            y=0;
                            h="(    5 * (pixelH * pixelGrid *     0.50))";
                            w="(    5 * (pixelW * pixelGrid *     0.50))";
                            tooltip="183RD: Toggle garrison on dragging units";
                            textureChecked="\z\oeta\addons\media\images\183rd.paa";
                            textureUnchecked="\z\oeta\addons\media\images\183rd.paa";
                            textureFocusedChecked="\z\oeta\addons\media\images\183rd.paa";
                            textureFocusedUnchecked="\z\oeta\addons\media\images\183rd.paa";
                            textureHoverChecked="\z\oeta\addons\media\images\183rd.paa";
                            textureHoverUnchecked="\z\oeta\addons\media\images\183rd.paa";
                            texturePressedChecked="\z\oeta\addons\media\images\183rd.paa";
                            texturePressedUnchecked="\z\oeta\addons\media\images\183rd.paa";
                            textureDisabledChecked="\z\oeta\addons\media\images\183rd.paa";
                            textureDisabledUnchecked="\z\oeta\addons\media\images\183rd.paa";
                        };
                    };
                };
            };
        };
    };
};

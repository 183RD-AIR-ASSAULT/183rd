class CfgSounds {

    sounds[] = {};
    class Denied {
        name  = "Denied";
        sound[]  = { "z\oeta\addons\media\Sounds\Denied.ogg", 1, 1, 100 };
        titles[] = { 0, "" };
    };

    class AirRaid {
        name  = "AirRaid";
        sound[]  = { "z\oeta\addons\media\Sounds\AirRaid.ogg", 1, 1, 100 };
        titles[] = { 0, "" };
    };

    class NukeAlarm {
        name  = "NukeAlarm";
        sound[]  = { "z\oeta\addons\media\Sounds\NukeAlarm.ogg", 1, 1, 100 };
        titles[] = { 0, "" };
    };

    class Windows {
        name  = "Windows";
        sound[]  = { "z\oeta\addons\media\Sounds\Windows.ogg", 1, 1, 100 };
        titles[] = { 0, "" };
    };
    class CallToPrayer {
        name   = "CallToPrayer";
        sound[]  = { "z\oeta\addons\media\Sounds\CallToPrayer.ogg", 1, 1, 100 };
        titles[] = { 0, "" };
        length  = 73;
    };
    #include "Sounds\AL\CfgSounds_AL.hpp"

    class OETA_Nuclear {
        name = "[183RD] Nuclear siren";
        sound[] = {QPATHTOF(Music\Misc\Nuclear.ogg), db+0, 1.0};
        titles[] = {1, "Nuclear siren"};
    };

    class OETA_Baby {
        name = "[183RD] Baby";
        sound[] = {QPATHTOF(Music\Horror\baby.ogg), db+0, 1.0};
        titles[] = {1, "Baby"};
    };

    class OETA_Kind {
        name = "[183RD] Kind";
        sound[] = {QPATHTOF(Music\Horror\kind.ogg), db+0, 1.0};
        titles[] = {1, "Kind"};
    };
};

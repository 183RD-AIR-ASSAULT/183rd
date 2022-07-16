
class CfgWeapons {
    class Default;
    class RifleCore;
    class MGun;
    class cannonCore;
    class LMG_RCWS: MGun {
        aiDispersionCoefX = 5;
        aiDispersionCoefY = 4;
        class manual: MGun {};
        class close: manual {
            aiBurstTerminable = 0;
            aiDispersionCoefX = 6.0;
            aiDispersionCoefY = 7.0;
        };
        class short: close {
            aiBurstTerminable = 0;
        };
        class medium: close {
            aiBurstTerminable = 0;
        };
        class far: close {
            aiBurstTerminable = 0;
        };
    };

    class HMG_127: LMG_RCWS {
        class manual: MGun {};
        class close: manual {
            aiBurstTerminable = 0;
            aiDispersionCoefX = 6.0;
            aiDispersionCoefY = 7.0;
        };
        class short: close {
            aiBurstTerminable = 0;
        };
        class medium: close {
            aiBurstTerminable = 0;
        };
        class far: close {
            aiBurstTerminable = 0;
        };
    };

    class LMG_coax: LMG_RCWS {
        class manual: MGun {};
        class close: manual {
            aiBurstTerminable = 0;
            aiDispersionCoefX = 6.0;
            aiDispersionCoefY = 7.0;
        };
        class short: close {
            aiBurstTerminable = 0;
        };
        class medium: close {
            aiBurstTerminable = 0;
        };
        class far: close {
            aiBurstTerminable = 0;
        };
    };

    class autocannon_Base_F: CannonCore {
        aiDispersionCoefX = 6;
        aiDispersionCoefY = 5;
        //cursor = "EmptyCursor";
        //cursorAim = "cannon";
    };
    class Rifle: RifleCore {
        aiDispersionCoefX = 9;
        aiDispersionCoefY = 10;
    };

    class MGunCore: Default {
        aiDispersionCoefX = 14;
        aiDispersionCoefY = 15;
    };

    class GrenadeLauncher: Default {
        aiDispersionCoefX = 25;
        aiDispersionCoefY = 26;
    };

    class Throw: GrenadeLauncher {
        class ThrowMuzzle: GrenadeLauncher {
            aiDispersionCoefX = 25;
            aiDispersionCoefY = 26;
        };
    };
};

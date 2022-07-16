
class Mode_SemiAuto {
    aiDispersionCoefX = 2.7;
    aiDispersionCoefY = 3;

    aiRateOfFire = 1.45;
    aiRateOfFireDistance = 600;
    minRange = 0;
    minRangeProbab = 0.7;
    midRange = 300;
    midRangeProbab = 0.5;
    maxRange = 650;
    maxRangeProbab = 0.2;
};

class Mode_Burst: Mode_SemiAuto {
    aiDispersionCoefX = 3.1;
    aiDispersionCoefY = 3.6;

    aiRateOfFire = 1;
    aiRateOfFireDistance = 150;
    minRange = 0;
    minRangeProbab = 0.8;
    midRange = 150;
    midRangeProbab = 0.7;
    maxRange = 300;
    maxRangeProbab = 0.1;
};

class Mode_FullAuto: Mode_SemiAuto {
    aiDispersionCoefX = 3.4;
    aiDispersionCoefY = 4;

    aiRateOfFire = 0.1;
    aiRateOfFireDistance = 50;
    minRange = 0;
    minRangeProbab = 0.2;
    midRange = 75;
    midRangeProbab = 0.5;
    maxRange = 150;
    maxRangeProbab = 0.1;
};

class CfgWeapons {
    class LauncherCore;
    class LauncherBase_F;
    class Launch_RPG7_F: LauncherBase_F {
        primary = 11;
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = 1.7;
            aiDispersionCoefY = 2.2;
            //aiRateOfFire = 12;
            aiRateOfFireDispersion = 10;
            aiRateOfFireDistance = 300;
            maxRange = 400;
            maxRangeProbab = 0.4;
            midRange = 250;
            midRangeProbab = 0.9;
            minRange = 5;
            minRangeProbab = 0.56;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        };
    };
    class launch_RPG32_F: LauncherBase_F {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = 1.7;
            aiDispersionCoefY = 2.2;
            aiRateOfFire = 7;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 400;
            maxRange = 800;
            maxRangeProbab = 0.85;
            midRange = 100;
            midRangeProbab = 0.85;
            minRange = 10;
            minRangeProbab = 0.3;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        };
    };
};

class CfgAmmo {
    class RocketCore;
    class RocketBase;
    class R_PG7_F: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 35;
        effectsMissile = "missile3";
    };
    class M_SPG9_HEAT: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
    };
    class R_PG32V_F: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 35;
    };
    class R_MRAAWS_HEAT_F: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
        cost = 35;
    };
};

class CfgAmmo {
  class rhs_rpg26_rocket;
  class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket {
    aiAmmoUsageFlags = "64 + 128 + 256 + 512";
    airLock = 1;
    allowAgainstInfantry = 1;
    cost = 35;
  };
};

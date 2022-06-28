

class ACE_atropine;
class ACE_morphine: ACE_ItemCore {
    scope=2;
    displayName="Morphine autoinjector 10mg/1mL";
    descriptionShort="Analgesic, used for moderate pain";
    descriptionUse="Analgesic, used for moderate pain";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1;
    };
};

class ACE_epinephrine: ACE_ItemCore {
    scope=2;
    displayName="Adrenaline autoinjector 1mg/1mL";
    descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
    descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1;
    };
};

////////////////////////////////////////////////////////////////////////////////

class OETA_morphine: ACE_ItemCore {
    scope=2;
    displayName="Morphine 10mg/1mL Ampoule";
    picture="\z\oeta\addons\media\images\icon\morphine.paa";
    descriptionShort="Analgesic, used for moderate pain";
    descriptionUse="Analgesic, used for moderate pain";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};

class OETA_epinephrine: ACE_ItemCore {
    scope=2;
    displayName="Adrenaline 1mg/1mL Ampoule";
    picture="\z\oeta\addons\media\images\icon\epi.paa";
    descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
    descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};
class OETA_naloxone: ACE_atropine {
    scope=2;
    displayName="Naloxone Hydrochloride Dihydrate 1.6mg/4mL Ampoule";
    picture="\z\oeta\addons\media\images\icon\naloxone.paa";
    descriptionShort="Opiod antagonist, reverses negative effects of narcotics";
    descriptionUse="Opiod antagonist, reverses negative effects of narcotics";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};

class OETA_fentanyl: ACE_morphine {
    scope=2;
    displayName="Fentanyl 100mcg/2mL Ampoule";
    picture="\z\oeta\addons\media\images\icon\fentanyl.paa";
    descriptionShort="Analgesic, used for severe pain";
    descriptionUse="Analgesic, used for severe pain";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};

class OETA_ketamine: ACE_morphine {
    scope=2;
    displayName="Ketamine Hydrochloride 200mg/2mL Ampoule";
    descriptionShort="Dissociative analgesic/anestehtic used for severe pain, available in a 25mg or 200mg doses. Causes mild hypertension and tachycardia.";
    descriptionUse="Dissociative analgesic/anestehtic used for severe pain, available in a 25mg or 200mg doses. Causes mild hypertension and tachycardia.";
    picture="\z\oeta\addons\media\images\icon\ket.paa";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};

class OETA_tetra: ACE_morphine {
    scope=2;
    displayName="Tetracycline 250mg capsule";
    descriptionShort="Antibiotic capsule";
    descriptionUse="Antibiotic capsule";
    picture="\z\oeta\addons\media\images\icon\tetra.paa";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.01;
    };
};

class OETA_Apap: ACE_morphine {
    scope=2;
    author="Monk";
    displayName="Paracetemol 2x500mg Tablets";
    picture="\z\oeta\addons\media\images\icon\apap.paa";
    model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    descriptionShort="Analgesic/Antipyretic, used for light pain and fever";
    descriptionUse="Analgesic/Antipyretic, used for light pain and fever";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass=0.5;
    };
};

class OETA_VPN: ACE_ItemCore {
    scope=2;
    displayName="3mL Drug Syringe";
    descriptionShort="For administering drugs";
    descriptionUse="For administering drugs";
    picture="\z\oeta\addons\media\images\icon\VPN.paa";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass=0.01;
    };
};

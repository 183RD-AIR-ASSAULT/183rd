

class OETA_Morphine {
    allowSelfTreatment = 1;
    medicRequired = 0;
    treatmentTimeSelfCoef = 1; // todo: this isn't used anywhere, remove?
    consumeItem = 1;
    allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
    treatmentTime = ace_medical_treatment_treatmentTimeAutoinjector;
    displayName = "Morphine 10mg/1mL";
    displayNameProgress = "Injecting Morphine";
    icon = "\z\oeta\addons\media\images\icon\VPN.paa";
    category = "medication";
    condition = "OETA_Medical_fnc_vpnMedicationCondition";
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "OETA_Medical_fnc_vpnMedicationSuccess";
    callbackFailure = "";
    items[] = {
        "OETA_morphine"
    };
    animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
    animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
    animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
    animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
    sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
    litter[] = {{}};
};

class OETA_Epinephrine: OETA_Morphine {
    displayName = "Adrenaline 1mg/1mL";
    displayNameProgress = "Injecting Adrenaline";
    icon = "\z\oeta\addons\media\images\icon\VPN.paa";
    condition = "OETA_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "OETA_Medical_fnc_vpnMedicationSuccess";
    requiresAll=true;
    items[] = {
        "OETA_epinephrine"
    };
    litter[] = {{}};
};


////////////////////////////////////////////////////////////////////////////////

class Naloxone: OETA_Morphine {
    displayName="Naloxone 1.6mg/4mL";
    displayNameProgress="Injecting Naloxone";
    icon="\z\oeta\addons\media\images\icon\VPN.paa";
    condition = "OETA_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "OETA_Medical_fnc_naloxoneSuccess";
    requiresAll=true;
    items[] = {
        "OETA_naloxone"
    };
    litter[] = {{}};
};

class Fentanyl: OETA_Morphine {
    displayName="Fentanyl 100mcg/2mL";
    displayNameProgress="Injecting Fentanyl";
    icon = "\z\oeta\addons\media\images\icon\VPN.paa";
    condition = "OETA_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "OETA_Medical_fnc_vpnMedicationSuccess";
    requiresAll=true;
    items[]={
        "OETA_fentanyl"
    };
    litter[] = {{}};
};

class Ketamine_6mg: OETA_Morphine {
    displayName="Ketamine 6mg/2mL";
    displayNameProgress="Injecting Ketamine 6mg/2mL";
    icon = "\z\oeta\addons\media\images\icon\VPN.paa";
    requiresAll=true;
    items[] = {
        "OETA_ketamine"
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "OETA_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

class Ketamine_200mg: OETA_Morphine {
    displayName="Ketamine 200mg/2mL";
    displayNameProgress="Injecting Ketamine 200mg/2mL";
    icon = "\z\oeta\addons\media\images\icon\VPN.paa";
    requiresAll=true;
    items[] = {
        "OETA_ketamine"
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "OETA_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

////////////////////////////////////////////////////////////////////////////////

class NonVPNMedication: OETA_Morphine {
    condition = "";
    callbackSuccess = "";
};

class Tetra: NonVPNMedication {
    displayName="Tetracycline 250mg";
    displayNameProgress="Giving Tetracycline";
    icon="\z\oeta\addons\media\images\icon\tetra.paa";
    items[]={
        "OETA_tetra"
    };
    allowedSelections[]={
        "Head"
    };
};

class Apap: NonVPNMedication {
    displayName="Paracetemol 1g";
    displayNameProgress="Giving Paracetemol 1g";
    icon="\z\oeta\addons\media\images\icon\apap.paa";
    condition = "";
    callbackStart = "";
    items[] = {
        "OETA_Apap"
    };
    allowedSelections[] = {
        "Head"
    };
    treatmentTime=1;
    litter[]={ {"All","",{"OETA_ApapLitter"}}
    };
};

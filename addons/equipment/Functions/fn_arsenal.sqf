#include "..\script_component.hpp"
/*
Arguments:
0: items only misc items <ARRAY of STRING>
1: tooltip <STRING> (Optional)
2: picture path <STRING> (Optional)
3: override a spezific button (0-9) <NUMBER> (Optional)

Return Value:
successful: number of the slot; error: -1 <NUMBER>

Example:

call OETA_fnc_arsenal;
"ItemcTab",
"ItemAndroid",
"ItemcTabHCam",
"ItemMicroDAGR",

Public: Yes
*/

[
    ["ItemcTab","ItemAndroid","ItemcTabHCam","ItemMicroDAGR","tfw_rf3080Item","tfw_blade","tfw_whip","tfw_dd","Laserbatteries","LOP_LaserMag","Laserbatteries","ACE_ATragMX","ItemAndroid","ItemMicroDAGR","ItemcTabHCam","ItemcTab","ACE_DAGR","ACE_HuntIR_monitor","uh60_jvmf_tablet","ACE_Kestrel4500","ACE_microDAGR","tun_tablet","ACE_UAVBattery"],
    "Tech",
    "\a3\ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["kat_bloodIV_B_500_N","kat_bloodIV_AB_500_N","kat_bloodIV_O_500_N","kat_bloodIV_O_N","kat_bloodIV_A_N","kat_bloodIV_AB_N","kat_bloodIV_B_N","kat_bloodIV_O_250_N","kat_bloodIV_A_250_N","kat_bloodIV_AB_250_N","kat_bloodIV_B_250_N","kat_bloodIV_A_500_N","kat_Carbonate","kat_Painkiller","kat_Carbonate","ACE_ATNAA","oeta_medbags_Trauma","kat_IO_FAST","kat_IV_16","kat_TXA","kat_amiodarone","kat_atropine","kat_lidocaine","kat_naloxone","kat_nitroglycerin","kat_norepinephrine","kat_phenylephrine","ACE_epinephrine","ACE_morphine","ACE_adenosine","kat_aatKit","kat_Painkiller","kat_accuvac","ACE_adenosine","oeta_epinephrine","ACE_epinephrine","kat_X_AED","oeta_NDC","ACE_elasticBandage","ACE_packingBandage","kat_crossPanel","kat_bloodIV_O","kat_bloodIV_A","kat_bloodIV_AB","ACE_bloodIV","kat_bloodIV_B","ACE_bloodIV_250","kat_bloodIV_O_250","kat_bloodIV_A_250","kat_bloodIV_AB_250","kat_bloodIV_B_250","ACE_bloodIV_500","kat_bloodIV_O_500","kat_bloodIV_A_500","kat_bloodIV_AB_500","kat_bloodIV_B_500","ACE_bodyBag","oeta_medbags_FirstAid","oeta_medbags_DrugKit","oeta_fentanyl","KAT_Empty_bloodIV_250","KAT_Empty_bloodIV_500","FirstAidKit","kat_AED","kat_chestSeal","kat_larynx","oeta_ketamine","ACE_fieldDressing","oeta_medbags_MedicKit","Medikit","oeta_morphine","ACE_morphine","oeta_naloxone","oeta_triangleban","kat_guedel","oeta_Apap","ACE_personalAidKit","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500","kat_Pulseoximeter","ACE_quikclot","ACE_salineIV_250","ACE_salineIV","ACE_salineIV_500","ACE_splint","kat_stethoscope","vtx_stretcher_item","ACE_surgicalKit","oeta_tetra","ACE_tourniquet","Attachable_Helistretcher","oeta_VPN"],
    "Medical",
    "\z\ace\addons\medical_gui\data\categories\medication.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["ace_marker_flags_black","ace_marker_flags_blue","ace_marker_flags_green","ace_marker_flags_orange","ace_marker_flags_purple","ace_marker_flags_red","ace_marker_flags_white","ace_marker_flags_yellow","ACE_IR_Strobe_Item","ACE_Chemlight_Shield","KNB_PanelGreen","KNB_PanelRed","KNB_PanelYellow","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","taro_vs17_panel"],
    "Marking",
    "\z\ace\addons\arsenal\data\iconCustom.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["ACE_WaterBottle_Half","ACE_WaterBottle_Empty","ACE_WaterBottle","ACE_Cellphone","ACE_Humanitarian_Ration","plp_bo_w_AfterSun","ACE_Banana","plp_bo_w_BeachBat","plp_bo_w_BocceBalls","plp_bo_w_BottleBitters","plp_bo_w_BottleBlueCorazol","plp_bo_w_BottleLiqCream","plp_bo_w_BottleGin","plp_bo_w_BottleLiqOrange","plp_bo_w_BottleTequila","plp_bo_w_CigarCutter","plp_bo_w_Cigar","plp_bo_w_CigarFine","plp_bo_w_GlassAperitif","plp_bo_w_GlassCocktail","plp_bo_w_GlassDrink","plp_bo_w_Lifebelt","plp_bo_w_LifeguardFloat","plp_bo_w_CigarBoxSealed","plp_bo_w_SunMilk","plp_bo_w_SunBlocker","CAF_Axe","ACE_Can_Franta","ACE_Can_RedGull","ACE_Can_Spirit","ACE_Canteen","ACE_Canteen_Empty","ACE_Canteen_Half","ACE_MRE_SteakVegetables","ACE_MRE_CreamTomatoSoup","ACE_MRE_CreamChickenSoup","ACE_MRE_ChickenHerbDumplings","ACE_MRE_ChickenTikkaMasala","ACE_MRE_BeefStew","ACE_MRE_LambCurry","ACE_MRE_MeatballsPasta"],
    "Stuff",
    "\a3\ui_f\data\Map\MapControl\tourism_CA.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["tsp_lockpick","tsp_paperclip","AMP_Door_Wedge","ACE_Sandbag_empty","ACE_DefusalKit","ACE_DeadManSwitch","ACE_wirecutter","ToolKit","MineDetector","ACE_Clacker","ACE_M26_Clacker","ACE_EntrenchingTool","ACE_Fortify"],
    "Engineering",
    "\z\ace\addons\minedetector\ui\icon_mineDetector.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

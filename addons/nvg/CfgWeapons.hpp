#include "script_component.hpp"

#define BROKEN_GOGGLES(ORIGINAL_NVG) class ORIGINAL_NVG; \
class GVAR(DOUBLES(ORIGINAL_NVG,Broken)): ORIGINAL_NVG { \
        scope=1; \
        modelOptics=QPATHTOF(data\oeta_nvg_defunct.p3d); \
}

class CfgWeapons {
    class Default {};
    class Binocular: Default {};
    
    BROKEN_GOGGLES(ACE_NVG_Gen1);
    BROKEN_GOGGLES(ACE_NVG_Gen2);
    BROKEN_GOGGLES(ACE_NVG_Gen4);
    BROKEN_GOGGLES(ACE_NVG_Wide);
    BROKEN_GOGGLES(NVGoggles);
    BROKEN_GOGGLES(NVGoggles_INDEP);
    BROKEN_GOGGLES(NVGoggles_OPFOR);
    BROKEN_GOGGLES(NVGoggles_tna_F);
    BROKEN_GOGGLES(NVGogglesB_blk_F);
    BROKEN_GOGGLES(NVGogglesB_gry_F);
    BROKEN_GOGGLES(O_NVGoggles_ghex_F);
    BROKEN_GOGGLES(O_NVGoggles_grn_F);
    BROKEN_GOGGLES(O_NVGoggles_hex_F);
    BROKEN_GOGGLES(O_NVGoggles_urb_F);

    class NVGoggles: Binocular {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\bi.paa);
    };
    class rhsusf_ANPVS_14: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\single.paa);
    };
    class rhsusf_ANPVS_15: rhsusf_ANPVS_14 {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\bi.paa);
    };
    class rhs_1PN138: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\single.paa);
    };
    class O_NVGoggles_hex_F: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\quad.paa);
    };
    class ACE_NVG_Biocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\single.paa);
    };
    class ACE_NVG_Monocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\single.paa);
    };
    class ACE_NVG_Binocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\bi.paa);
    };
    class ACE_NVG_Quadocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\quad.paa);
    };
};

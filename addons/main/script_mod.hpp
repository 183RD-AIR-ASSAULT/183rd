// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX oeta

#define AUTHOR 183RD
#define QAUTHOR QUOTE(AUTHOR)
#define LOGO_PATH "\z\oeta\addons\media\images\183rd.paa"
#define URL "https://arma.wiki"
#define NAME 183rd

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.82
#define REQUIRED_CBA_VERSION {3,6,0}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(OETA - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(OETA - COMPONENT)
#endif





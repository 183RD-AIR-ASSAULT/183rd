#define MAINPREFIX z
#define PREFIX oeta
#define SUBPREFIX addons

#include "script_version.hpp"

#define VERSION MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR
#define VERSION_AR MAJOR,MINOR

#define AUTHOR 183RD
#define QAUTHOR QUOTE(AUTHOR)

#define LOGO_PATH "\z\oeta\addons\media\images\183rd.paa"

#define URL "https://arma.wiki"
#define NAME 183rd

// MINIMAL REQUIRED VERSIONS
// ARMA, CBA, ACE
#define REQUIRED_VERSION 2
#define REQUIRED_CBA_VERSION {3,12,2}
#define REQUIRED_ACE_VERSION {3,12,6}

#define ZEUS_ADDITIONS_TAG ZEUS_ADDITIONS

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(183rd - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(183rd - COMPONENT)
#endif


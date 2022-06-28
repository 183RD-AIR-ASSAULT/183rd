// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX oeta

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define OETA_TAG OETA

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.56

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(oeta - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(oeta - COMPONENT)
#endif

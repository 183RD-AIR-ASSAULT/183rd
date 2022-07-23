#define COMPONENT safestart
#define COMPONENT_BEAUTIFIED SafeStart
#include "\z\oeta\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
#define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_SAFESTART
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_CORE
    #define DEBUG_SETTINGS DEBUG_ENABLED_SAFESTART
#endif

#include "\z\oeta\addons\main\script_macros.hpp"
#define DIALOG_IDD 5413

#define TIMER (_this getVariable ["timer",-1])

#define MISSION_DISPLAY (findDisplay 46)
#include "\x\cba\addons\main\script_macros_common.hpp"
#define DFUNC(module) TRIPLES(ADDON,fnc,module)
#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// Chat macros
#define IS_CMND_AVAILABLE(var,cmnd) if !([var,cmnd] call EFUNC(chat,commandAvailable)) exitWith {}

// ACE3 reference macros
#define ACE_PREFIX ace
#define ACE_ADDON(module) DOUBLES(ACE_PREFIX,module)
#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))
#define DACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))


#define QN(var1) '##var1##'

#define HASHSET(hash,key,value) [hash,#key,value] call CBA_fnc_hashSet
#define HASHGET(hash,key) [hash,#key] call CBA_fnc_hashGet

#define EDEN_CHECK if !(is3DEN) exitwith {}
#define LOCAL_CHECK(ARG) if !(local ARG) exitwith {}

#define VERSIONNUMBER (MGETMVAR(Version_UpdatedNumber,102))
#define VERSION_CHECK(var1) if (var1 < VERSIONNUMBER) exitwith {}

// OETA macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))

// Extension macros
#define EXT "183rd_mods"
#define EXT_LOG "183rd_mods_log"


// OETA Debug macros
#include "script_debug.hpp"
#include "config_macros.hpp"


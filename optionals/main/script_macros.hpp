#define DEBUG_SYNCHRONOUS
#define DEBUG_MODE_FULL
#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2

// Main
#define QUOTE(var1) #var1
#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH); versionAr[] = {MAJOR,MINOR,PATCH}


// Expanding on CBA macros
#define CFUNC(var) EFUNC(core,var)
#define QCFUNC(var) QUOTE(CFUNC(var))

// Chat macros
#define IS_CMND_AVAILABLE(var,cmnd) if !([var,cmnd] call EFUNC(chat,commandAvailable)) exitWith {}

// ACE3 reference macros
#define ACE_PREFIX ace
#define ACE_ADDON(module) DOUBLES(ACE_PREFIX,module)
#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

#define GVAR(var1) DOUBLES(ADDON,var1)
#define EGVAR(var1,var2) TRIPLES(PREFIX,var1,var2)
#define QGVAR(var1) QUOTE(GVAR(var1))
#define QEGVAR(var1,var2) QUOTE(EGVAR(var1,var2))
#define QQGVAR(var1) QUOTE(QGVAR(var1))
#define QQEGVAR(var1,var2) QUOTE(QEGVAR(var1,var2))

#define GVARMAIN(var1) GVARMAINS(PREFIX,var1)
#define QGVARMAIN(var1) QUOTE(GVARMAIN(var1))
#define QQGVARMAIN(var1) QUOTE(QGVARMAIN(var1))

// 183RD macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))


#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #undef PREPE
    #undef PREPATTR
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
    #define PREPE(moduleName,fncName) DEFUNC(moduleName,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\moduleName\DOUBLES(fnc,fncName).sqf)
    #define PREPATTR(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\attributes\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #undef PREPE
    #undef PREPATTR
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
    #define PREPE(moduleName,fncName) [QPATHTOF(functions\moduleName\DOUBLES(fnc,fncName).sqf), QEFUNC(moduleName,fncName)] call CBA_fnc_compileFunction
    #define PREPATTR(fncName) [QPATHTOF(functions\attributes\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_MODULE(folder) [] call compile preprocessFileLineNumbers QPATHTOF(folder\__PREP__.sqf)

#define OETA_DEPRECATED(arg1,arg2,arg3) WARNING_3("%1 is deprecated. Support will be dropped in version %2. Replaced by: %3",arg1,arg2,arg3)

#define DGVAR(varName)    if (isNil "OETA_DEBUG_NAMESPACE") then { OETA_DEBUG_NAMESPACE = []; }; if (!(QUOTE(GVAR(varName)) in OETA_DEBUG_NAMESPACE)) then { PUSH(OETA_DEBUG_NAMESPACE, QUOTE(GVAR(varName))); }; GVAR(varName)
#define DVAR(varName)     if (isNil "OETA_DEBUG_NAMESPACE") then { OETA_DEBUG_NAMESPACE = []; }; if (!(QUOTE(varName) in OETA_DEBUG_NAMESPACE)) then { PUSH(OETA_DEBUG_NAMESPACE, QUOTE(varName)); }; varName
#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#undef QFUNC
#undef QEFUNC
#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define CSTRING_2(var1,var2) QUOTE(DOUBLES(DOUBLES($STR,PREFIX),DOUBLES(var1,var2)))

//CBA Error Macro Intercept
#undef ERROR
#define ERROR(MESSAGE) LOG_SYS_FILELINENUMBERS('ERROR',MESSAGE);\
MESSAGE call EFUNC(Debug,DebugMessage)

#undef WARNING
#define WARNING(MESSAGE) LOG_SYS_FILELINENUMBERS('WARNING',MESSAGE);\
MESSAGE call EFUNC(Debug,DebugMessage)

//Debug functions
#define FWDEBUG(basicmsg,detailedmsg) \
[basicmsg,detailedmsg] call EFUNC(Debug,DebugMessageDetailed)

#define GETMVALUE(var1,var2) getMissionConfigValue [ARR_2(QUOTE(TRIPLES(PREFIX,COMPONENT,var1)),var2)]
#define EGETMVALUE(var1,var2,var3) getMissionConfigValue [ARR_2(QUOTE(TRIPLES(PREFIX,var1,var2)),var3)]

#define GETVARM_SYS(var1,var2) getVariable [ARR_2(QUOTE(DOUBLES(PREFIX,var1)),var2)]
#define SETVARM_SYS(var1,var2) setVariable [ARR_2(QUOTE(DOUBLES(PREFIX,var1)),var2)]
#define SETPVARM_SYS(var1,var2) setVariable [ARR_3(QUOTE(DOUBLES(PREFIX,var1)),var2,true)]

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(TRIPLES(PREFIX,COMPONENT,var1)),var2)]
#define EGETVAR_SYS(var1,var2,var3) getVariable [ARR_2(QUOTE(TRIPLES(PREFIX,var1,var2)),var3)]

#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(TRIPLES(PREFIX,COMPONENT,var1)),var2)]
#define ESETVAR_SYS(var1,var2,var3) setVariable [ARR_2(QUOTE(TRIPLES(PREFIX,var1,var2)),var3)]

#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(TRIPLES(PREFIX,COMPONENT,var1)),var2,true)]
#define ESETPVAR_SYS(var1,var2,var3) setVariable [ARR_3(QUOTE(TRIPLES(PREFIX,var1,var2)),var3,true)]

#define MGETVAR(var1,var2,var3) var1 GETVARM_SYS(var2,var3)
#define MGETPLVAR(var1,var2) player GETVARM_SYS(var1,var2)
#define MGETMVAR(var1,var2) missionNamespace GETVARM_SYS(var1,var2)

#define GETVAR(var1,var2,var3) var1 GETVAR_SYS(var2,var3)
#define EGETVAR(var1,var2,var3,var4) var1 EGETVAR_SYS(var2,var3,var4)

#define GETPLVAR(var1,var2) player GETVAR_SYS(var1,var2)
#define EGETPLVAR(var1,var2,var3) player EGETVAR_SYS(var1,var2,var3)

#define GETMVAR(var1,var2) missionNamespace GETVAR_SYS(var1,var2)
#define EGETMVAR(var1,var2,var3) missionNamespace EGETVAR_SYS(var1,var2,var3)

#define MSETVAR(var1,var2,var3) var1 SETVARM_SYS(var2,var3)
#define MSETMVAR(var1,var2) missionNamespace SETVARM_SYS(var1,var2)
#define MSETMPVAR(var1,var2) missionNamespace SETPVARM_SYS(var1,var2)
#define MSETPVAR(var1,var2,var3) var1 SETPVARM_SYS(var2,var3)
#define MSETPLPVAR(var1,var2) player SETPVARM_SYS(var1,var2)

#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define ESETVAR(var1,var2,var3,var4) var1 ESETVAR_SYS(var2,var3,var4)

#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define ESETPVAR(var1,var2,var3,var4) var1 ESETPVAR_SYS(var2,var3,var4)

#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define ESETMVAR(var1,var2,var3) missionNamespace ESETVAR_SYS(var1,var2,var3)

#define SETMPVAR(var1,var2) missionNamespace SETPVAR_SYS(var1,var2)
#define ESETMPVAR(var1,var2,var3) missionNamespace ESETPVAR_SYS(var1,var2,var3)

#define SETPLVAR(var1,var2) player SETVAR_SYS(var1,var2)
#define ESETPLVAR(var1,var2,var3) player ESETVAR_SYS(var1,var2,var3)
#define SETPLPVAR(var1,var2) player SETPVAR_SYS(var1,var2)
#define ESETPLPVAR(var1,var2,var3) player ESETPVAR_SYS(var1,var2,var3)

// #define QQGVAR(var1) QUOTE(QGVAR(var1))
// #define QQEGVAR(var1,var2) QUOTE(QEGVAR(var1,var2))

#define QN(var1) '##var1##'

#define HASHSET(hash,key,value) [hash,#key,value] call CBA_fnc_hashSet
#define HASHGET(hash,key) [hash,#key] call CBA_fnc_hashGet

//Script control
#define EXEC_CHECK(ARG) \
private _argUpper = toUpper(#ARG);\
if (isNil QEGVAR(Core,Enabled)) then {\
    EGVAR(Core,Enabled) = EGETMVALUE(Core,Enabled,false);\
};\
if ((_argUpper isEqualto "SERVER") && {(((!isServer) && isMultiplayer) || (!(EGVAR(Core,Enabled))))}) exitWith {}; \
if ((_argUpper isEqualto "CLIENT") && {((!hasinterface) || (!(EGVAR(Core,Enabled))))}) exitWith {};\
if ((_argUpper isEqualto "HC") && {(((hasinterface || isServer) && isMultiplayer) || (!(EGVAR(Core,Enabled))))}) exitWith {};\
if ((_argUpper isEqualto "CLIENTHC") && {(((isDedicated) && isMultiplayer) || (!(EGVAR(Core,Enabled))))}) exitWith {};\
if ((_argUpper isEqualto "SERVERHC") && {(((hasinterface) && isMultiplayer) || (!(EGVAR(Core,Enabled))))}) exitWith {};\
if ((_argUpper isEqualto "ALL") && {(!(EGVAR(Core,Enabled)))}) exitWith {};\
if !(EGVAR(Core,Enabled)) exitWith {}

#define EDEN_CHECK if !(is3DEN) exitwith {}
#define LOCAL_CHECK(ARG) if !(local ARG) exitwith {}

#define VERSIONNUMBER (MGETMVAR(Version_UpdatedNumber,102))
#define VERSION_CHECK(var1) if (var1 < VERSIONNUMBER) exitwith {}

#include "script_debug.hpp"
#include "config_macros.hpp"



#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

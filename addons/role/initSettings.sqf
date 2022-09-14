
#include "script_component.hpp"
#define ROLE_SETTINGS_CAT COMPONENT_NAME
#define ROLE_HINT "list of steam user ID's"
// Roles
[
    "ROLES_MEDIC", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(medic), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "ROLES_SRMEDIC", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(srmedic), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "ROLES_ENG", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(eng), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "ROLES_SRENG", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(sreng), ROLE_HINT],// Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "ROLES_COMM", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(comm), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;


[
    "ROLES_SRCOMM", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    [CSTRING(srcomm), ROLE_HINT], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ROLE_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [], // data for this setting:
    1 // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

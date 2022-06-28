/*
 * ARMA EXTENDED ENVIRONMENT
 * \z\oeta\addons\hints\functions\fn_initialize.sqf
 * by Ojemineh
 *
 * initialize hints addon
 *
 * Arguments:
 * nothing
 *
 * Return:
 * nothing
 *
 * Example:
 * [] call OETA_hints_fnc_initialize;
 *
 */

// -------------------------------------------------------------------------------------------------

private _version = ["oeta_hints"] call oeta_fnc_getAddonVersion;
[4, "Addon (v%1) loaded...", [_version], "hints"] call oeta_fnc_log;

// -------------------------------------------------------------------------------------------------

if (is3den) exitWith {};

// -------------------------------------------------------------------------------------------------

// HINT TEMPLATES

//hint_oeta_default  = "<t align='center' font='RobotoCondensedLight' size='0.92' color='#c0c0c0'>%1<br/></t>";

hint_oeta_default  = "<t align='center' font='RobotoCondensedLight' size='0.92' color='#ffffff'>%1<br/></t>";

hint_oeta_icon_1  = "<t align='center' font='EtelkaMonospacePro' size='0.68' color='#ffffff'><img size='2.6' shadow='0' color='%2' image='%1' /><br/></t>";

hint_oeta_image_1 = "<t align='center' font='EtelkaMonospacePro' size='0.68' color='#ffffff'><img size='2.6' shadow='0' image='%1' /><br/></t>";
hint_oeta_image_2  = "<t align='center' font='EtelkaMonospacePro' size='0.68' color='#ffffff'><img size='2.6' shadow='0' image='%1' /><br/></t><t align='center' font='RobotoCondensedLight' size='0.92' color='#ffffff'>%2<br/></t>";
hint_oeta_image_3  = "<t align='center' font='EtelkaMonospacePro' size='0.68' color='#ffffff'><img size='2.6' shadow='0' color='%2' image='%1' /><br/></t><t align='center' font='RobotoCondensedLight' size='0.92' color='#ffffff'>%3<br/></t>";
hint_oeta_image_4  = "<t align='center' font='PuristaBold' size='0.92' color='#ffffff' shadow='1' shadowColor='#202020'>%1<br/></t><t align='center' font='EtelkaMonospacePro' size='0.68' color='#ffffff'><img size='2.6' shadow='0' image='%2' /><br/></t><t align='center' font='RobotoCondensedLight' size='0.92' color='#ffffff'>%3</t>";

hint_oeta_liner_1  = "<t align='center' font='RobotoCondensedLight' size='0.92' color='#ffffff'>%1<br/></t>";
hint_oeta_liner_2  = "<t align='center' font='PuristaBold' size='0.92' color='#ffffff' shadow='1' shadowColor='#202020'>%1<br/><br/></t><t align='center' font='RobotoCondensedLight' size='0.92' color='#ffffff'>%2<br/><br/></t>";

hint_oeta_var_1   = "<t font='EtelkaMonospacePro' size='0.78' color='#ffeeca'>%1</t>";

// -------------------------------------------------------------------------------------------------

if (Not hasInterface) exitWith {};

// -------------------------------------------------------------------------------------------------

// CLEANUP HINTS

//("oeta_RscHint" call BIS_fnc_rscLayer) cutRsc ["oeta_RscHint", "PLAIN", 0, true];
99 cutRsc ["oeta_RscHint", "PLAIN", 0, true];

[] call OETA_hints_fnc_cleanup;

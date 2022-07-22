/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\oeta\addons\modules\functions\fn_initialize.sqf
 *	by Ojemineh
 *
 *	initialize modules addon
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	nothing
 *
 *	Example:
 *	[] call OETA_modules_fnc_initialize;
 *
 */

// -------------------------------------------------------------------------------------------------

private _version = ["oeta_modules"] call OETA_fnc_getAddonVersion;
[4, "Addon (v%1) loaded...", [_version], "modules"] call oeta_core_fnc_log;

// -------------------------------------------------------------------------------------------------

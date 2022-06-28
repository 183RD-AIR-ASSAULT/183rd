/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\OETA_common\functions\diagnostics\fn_isDebug.sqf
 *	by Ojemineh
 *
 *	check if debug is enabled
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	<BOOLEAN>
 *
 *	Example:
 *	[] call OETA_common_fnc_isDebug;
 *
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["OETA_debug_enabled", false]);

_return;

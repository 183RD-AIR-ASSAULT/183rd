/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\oeta_coreunctions\diagnostics\fn_isDebug.sqf
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
 *	[] call oeta_corenc_isDebug;
 *
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["OETA_debug_enabled", false]);

_return;

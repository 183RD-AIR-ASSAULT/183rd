params ["_pos", "_attachedObject"];

if (isNull _attachedObject) exitWith {};
if (not alive _attachedObject) exitWith {};

private _id = format ["casualty_%1", round (random 10000)];

[_attachedObject] remoteExec ["oeta_fnc_Casualty", 0, _id];

// not documented: module called

params [
    ["_logic",objNull,[objNull]],
    ["_groups",[],[[]]],
    "_localGroups",
    "_logic"
];

private _objects = synchronizedObjects _logic;
{
    [_x] call OETA_fnc_setMedicalFacility;
} foreach _objects;
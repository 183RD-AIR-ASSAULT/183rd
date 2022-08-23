#include "../script_component.hpp"
// not documented: called by module
if !(isserver) exitwith {};

params [
    ["_logic",objNull,[objNull]],
    ["_groups",[],[[]]],
    "_localGroups",
    "_logic"
];

private _objects = synchronizedObjects _logic;

private _type = _logic getVariable ["Type", "ANY"];

{
    [_x, _type, 2] call FUNC(createPortableFOB);
} forEach _objects;
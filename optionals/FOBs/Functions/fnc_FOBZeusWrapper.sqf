// not documented, wrapper function
#include "../script_component.hpp"
#include "compositions.inc"

params ["_size"];

private _fobs = [];
private _name = "";

switch (_size) do {
    case 0: {
        _fobs = [
            [_LR_FOBS_CAMPS] call EFUNC(common,getKeys),
            [_LR_FOBS_CAMPS] call EFUNC(common,getValues),
            0
        ];
        _name = "Camp";
    };
    case 1: {
        _fobs = [
            [_LR_FOBS_SMALL] call EFUNC(common,getKeys),
            [_LR_FOBS_SMALL] call EFUNC(common,getValues),
            0
        ];
        _name = "Small";
    };
    case 2: {
        _fobs = [
            [_LR_FOBS_MEDIUM] call EFUNC(common,getKeys),
            [_LR_FOBS_MEDIUM] call EFUNC(common,getValues),
            0
        ];
        _name = "Medium";
    };
    case 3: {
        _fobs = [
            [_LR_FOBS_LARGE] call EFUNC(common,getKeys),
            [_LR_FOBS_LARGE] call EFUNC(common,getValues),
            0
        ];
        _name = "Large";
    };
    default { };
};

private _dialogResult = [
    format ["Create Portable FOB - %1", _name],
    [
        ["COMBO", "Type", _fobs]
    ],
    {
        params ["_results", "_args"];
        _results params ["_fob"];
        _args params ["_hoveredEntity", "_size"];

        [_hoveredEntity, _fob, _size] remoteExec [QFUNC(createPortableFOB), 2];
    },
    {},
    [_hoveredEntity, _size]
] call zen_dialog_fnc_create;

if !(_dialogResult) exitWith {
    ["Failed to create zen dialog!", "ErrorLog"] call EFUNC(common,log);
};
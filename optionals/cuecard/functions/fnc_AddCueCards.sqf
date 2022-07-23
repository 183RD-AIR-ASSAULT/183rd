// not documented: postInit

if !(hasinterface) exitwith {};
if !(isClass (configFile >> "CfgPatches" >> "ace_main")) exitwith {};

_cueCardMedical = [
    //  0 - mist
    [
        "z\oeta\addons\media\images\cuecards\mist.paa",
        "MIST Report Card"
    ],
    //  1 - medical
    [
        "z\oeta\addons\media\images\cuecards\med_band.paa",
        "Medical SmartCard Bandages"
    ],

    //  2 -
    [
        "z\oeta\addons\media\images\cuecards\med_blood.paa",
        "Medical SmartCard Blood Loss"
    ],
    //  3 -
    [
        "z\oeta\addons\media\images\cuecards\med_wounds.paa",
        "Medical SmartCard Wounds"
    ],
    //  4 -
    [
        "z\oeta\addons\media\images\cuecards\med_card.paa",
        "Medical SmartCard Cardiac Arrest"
    ],
    //  5 -
    [
        "z\oeta\addons\media\images\cuecards\med_drugs.paa",
        "Medical SmartCard Drugs"
    ]
];

_cueCardsData = [
    //  0 - CASEVAC Request Card
    [
        "z\oeta\addons\media\images\cuecards\casevac.paa",
        "CASEVAC Request Card"
    ],

    // 1 - ace Report Card
    [
        "z\oeta\addons\media\images\cuecards\contact.paa",
        "Contact Report Card"
    ],
    // 2 - Contact Report Card
    [
        "z\oeta\addons\media\images\cuecards\veh_ace.paa",
        "ACE \ Vehicle Report Card"
    ],
    // 3 - Contact Report Card
    [
        "z\oeta\addons\media\images\cuecards\salute.paa",
        "Salute Report Card"
    ],
    //  4 - FAC rotary Request Card
    [
        "z\oeta\addons\media\images\cuecards\rotary.paa",
        "FAC Rotary Request Card"
    ],

    //  5 - FAC fixed wing Orders Card
    [
        "z\oeta\addons\media\images\cuecards\fixwing.paa",
        "FAC Fixed Wing Request Card"
    ],

    //  6 - FAC hlz
    [
        "z\oeta\addons\media\images\cuecards\hlz.paa",
        "HLZ Request Card"
    ],

    //  7 - FAC alz
    [
        "z\oeta\addons\media\images\cuecards\lz.paa",
        "ALZ Request Card"
    ],
    //  8 - FAC gunship
    [
        "z\oeta\addons\media\images\cuecards\gunship.paa",
        "Gunship Request Card"
    ],
    //  9 - FAC gunship
    [
        "z\oeta\addons\media\images\cuecards\airdrop.paa",
        "Airdrop Request Card"
    ],

    //  10 - checkin
    [
        "z\oeta\addons\media\images\cuecards\airframe.paa",
        "Aircraft Checkin Card"
    ]
];

// Add Parent Action
_parentAction = [
    "CueCardAction",
    "Smart Cards",
    "", {diag_log "running parent action"}, {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _parentAction] call ace_interact_menu_fnc_addActionToObject;

// Add Action to open notepad
_npAction = [
    "openNotepad",
    "Open Notepad",
    "", // see if this looks nice or not TODO
    {
            _this spawn {
            params ["_target", "_caller"];

            diag_log format ["[[LOGGING]] Target: %1", _target];

            disableserialization;
            ([] call bis_fnc_displayMission) createdisplay "RscNotepad";
            [missionnamespace,"cueCardShown",[_target] + ["Notepad"]] spawn bis_fnc_callScriptedEventHandler;
        };
    }, {true}, {},
    [],
    ""
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "CueCardAction"], _npAction] call ace_interact_menu_fnc_addActionToObject;

// Add Cue Card Actions
{

    _x params [
        "_texture",
        "_name"
    ];

    _title = format ["Show %1", _name];
    _id = format ["cueCardAction_%1", _forEachIndex];

    diag_log format ["[[LOGGING]]  ID: %1    Title: %2", _id, _title];

    _action = [
        _id,
        _title,
        _texture, // see if this looks nice or not TODO
        {
            _this spawn {
                params ["_target", "_caller", "_data"];

                diag_log format ["[[LOGGING]] Target: %2    Data: %1", _data, _target];

                disableserialization;
                missionNamespace setVariable ["RscDisplayCueCard_data", _data];
                ([] call bis_fnc_displayMission) createdisplay "RscDisplayCueCard";
                ([] call bis_fnc_displayMission) createdisplay "NotepadDialog";
                [missionnamespace,"cueCardShown",[_target] + _data] spawn bis_fnc_callScriptedEventHandler;
            };
        }, {true}, {},
        _x,
        ""
    ] call ace_interact_menu_fnc_createAction;

    [player, 1, ["ACE_SelfActions", "CueCardAction"], _action] call ace_interact_menu_fnc_addActionToObject;
} forEach _cueCardsData;

// // medical
// private _medic = player getVariable "ace_medical_medicclass";
// if (_medic >= 1) then {
//     // Add Parent Action
//     _parentActionMed = [
//         "CueCardActionMed",
//         "Medical Smart Cards",
//         "", {diag_log "running parent action"}, {true}
//     ] call ace_interact_menu_fnc_createAction;

//     [player, 1, ["ACE_SelfActions"], _parentActionMed] call ace_interact_menu_fnc_addActionToObject;
//     [player, 1, ["ACE_SelfActions", "CueCardActionMed"], _npAction] call ace_interact_menu_fnc_addActionToObject;

    
//     // Add Cue Card Actions
//     {
//         _xmed params [
//             "_texture",
//             "_name"
//         ];

//         _title = format ["Show %1", _name];
//         _id = format ["CueCardActionMed%1", _forEachIndex];

//         diag_log format ["[[LOGGING]]  ID: %1    Title: %2", _id, _title];

//         _action = [
//             _id,
//             _title,
//             _texture, // see if this looks nice or not TODO
//             {
//                 _this spawn {
//                     params ["_target", "_caller", "_data"];

//                     diag_log format ["[[LOGGING]] Target: %2    Data: %1", _data, _target];

//                     disableserialization;
//                     missionNamespace setVariable ["RscDisplayCueCard_data", _data];
//                     ([] call bis_fnc_displayMission) createdisplay "RscDisplayCueCard";
//                     ([] call bis_fnc_displayMission) createdisplay "NotepadDialog";
//                     [missionnamespace,"cueCardShown",[_target] + _data] spawn bis_fnc_callScriptedEventHandler;
//                 };
//             }, {true}, {},
//             _xmed,
//             ""
//         ] call ace_interact_menu_fnc_createAction;

//         [player, 1, ["ACE_SelfActions", "CueCardActionMed"], _action] call ace_interact_menu_fnc_addActionToObject;
//     } forEach _cueCardMedical;
// };





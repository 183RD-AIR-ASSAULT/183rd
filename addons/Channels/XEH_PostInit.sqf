if !(isserver) exitwith {};

// Enable/Disable Channels
[0, [OETA_Channels_GlobalText, OETA_Channels_GlobalVoice]] remoteExec ["enablechannel",0,true];
[1, [OETA_Channels_SideText, OETA_Channels_SideVoice]] remoteExec ["enablechannel",0,true];
[2, [OETA_Channels_CommandText, OETA_Channels_CommandVoice]] remoteExec ["enablechannel",0,true];
[3, [OETA_Channels_GroupText, OETA_Channels_GroupVoice]] remoteExec ["enablechannel",0,true];
[4, [OETA_Channels_VehicleText, OETA_Channels_VehicleVoice]] remoteExec ["enablechannel",0,true];
[5, [OETA_Channels_DirectText, OETA_Channels_DirectVoice]] remoteExec ["enablechannel",0,true];


// Global Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (OETA_Channels_GlobalDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (OETA_Channels_GlobalDuration * 60)) then {
            [0, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Side Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (OETA_Channels_SideDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (OETA_Channels_SideDuration * 60)) then {
            [1, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Command Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (OETA_Channels_CommandDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (OETA_Channels_CommandDuration * 60)) then {
            [2, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Group Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (OETA_Channels_GroupDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (OETA_Channels_GroupDuration * 60)) then {
            [3, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Vehicle Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (OETA_Channels_VehicleDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (OETA_Channels_VehicleDuration * 60)) then {
            [4, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Direct Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (OETA_Channels_DirectDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (OETA_Channels_DirectDuration * 60)) then {
            [5, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

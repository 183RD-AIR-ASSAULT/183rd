class CfgRespawnTemplates {
    // Class used in respawnTemplates entry
    class GVAR(default) {
        displayName = CSTRING(DisplayName);
        onPlayerKilled = QFUNC(onPlayerKilled);
        onPlayerRespawn = QFUNC(onPlayerRespawn);
        respawnDelay = 6;
        respawnOnStart = -1;        // Default: 0
                                    // -1 - Dont respawn on start. Don't run respawn script on start.
                                    //  0 - Dont respawn on start. Run respawn script on start.
                                    //  1 - Respawn on start. Run respawn script on start.
        respawnButton = 1;          // 0: disabled - 1: enabled. Default: 1
        respawnDialog = 0;          // 0: disabled - 1: enabled. Default: 1
        // respawnTypes[] = {3};
        isCall = 1;
    };
};



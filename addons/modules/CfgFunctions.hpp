class CfgFunctions {

    class OETA_Modules {

        tag = "oeta_modules";

        class Modules {
            file = "z\oeta\addons\modules\functions";
            class initialize {};
            class initSettings {};
        };

    };

    class OETA_Functions {

        tag = "oeta";

        class Modules_Sound {
            file = "z\oeta\addons\modules\functions\sound";
            class moduleAmbientSound {};
            class moduleTriggerSound {};
        };

        class Modules_Speech {
            file = "z\oeta\addons\modules\functions\speech";
            class moduleGlobalSpeech {};
            class moduleGlobalSpeechMenu {};
            class moduleGlobalSpeechPlay {};
            class moduleTriggerSpeech {};
        };

    };

};

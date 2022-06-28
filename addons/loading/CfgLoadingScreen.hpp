#define LOADING_SCREEN_CLASS(className,authorName) \
    class className { \
        author = QUOTE(authorName); \
        path = QPATHTOF(ui\loading\##className##.paa); \
    }

class GVAR(CfgLoadingScreen) {
    class Backgrounds {
        LOADING_SCREEN_CLASS(AdobeStock_269676636,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_269676677,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_271859839,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_285905473,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_296841733,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_297308106,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_298480575,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_361616315,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_287796119,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_288887578,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_319048089,YONV);
        LOADING_SCREEN_CLASS(maxresdefault,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_269677107,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_272813407,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_275306051,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_283924597,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_371890417,YONV);
        LOADING_SCREEN_CLASS(AdobeStock_400370807,YONV);
    };
};

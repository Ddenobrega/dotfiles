#include <stdlib.h>
#include <string.h>
int volume(char* val){
    const char* pulseUp = "pactl --set-sink-volume 0 +10%"; const char* pulseDown = "pactl --set-sink-volume 0 -10%";
    if(strcmp(val, "up") == 0){
        system(pulseUp);
    }
    else if(strcmp(val, "down") == 0){
        system(pulseDown);
    }
    else{
        return 1;
    }
    return 0;
}

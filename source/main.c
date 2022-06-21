#include "super.h"
#include "scenes.c"

int main (int argc, char *argv[]) {    
    // we can only start a new game!
    clear_screen(); // found in super.h
     

    // any function that starts with the the word scene 
    // is located in the scenes.c file
    scene_0();    
    bool first = scene_1();
    
    if (first)
        scene_About_AI();
    else
        scene_Explore_0();

    return 0;
}
#include "super.h"
#include <stdio.h>
#include <string.h>
#include "scenes.c"

int main (int argc, char *argv[]) {    
    // we can only start a new game!
    clear_screen(); // found in super.h
     

    // any function that starts with the the word scene 
    // is located in the scenes.c file
    scene_0();    
    return 0;
}

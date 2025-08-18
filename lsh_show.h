#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARGS 256
int lsh_show(char **args){
    if(args[1]==NULL){
        fprintf(stderr,"lsh: expected argument to \"show_image\"\n");
        return 1;
    }

    char command[MAX_ARGS];
    snprintf(command, sizeof(command), "eog %s", args[1]); 
    int status = system(command);
    
    if (status == -1) {
        perror("lsh");
        return 1;
    }

    return 0;
}
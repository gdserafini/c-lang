#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
    if(argc != 2){
        printf("\nEnter a name.\n");
        exit(0);
    }
        
    printf("Hello %s", argv[1]);
}
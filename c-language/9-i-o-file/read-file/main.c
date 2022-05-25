//**TESTS -> READ FILES**

#include <stdio.h>
#include <stdlib.h>

//**PROTOTYPE**
int file_is_ok(FILE* f);

int main(void){
    FILE *f;

    f = fopen("main.txt", "r+");
    
    if(!file_is_ok(f)){
        printf("\nData base error.\n");
        exit(0);
    }
    else{
        printf("\ntest\n");
    }
    
    fclose(f);

    return 0;
}

//fopen is successful -> 1
int file_is_ok(FILE* f){
    if(f = NULL){
        return 0;
    }
    else{
        return 1;
    }
}
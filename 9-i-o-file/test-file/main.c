//**TESTS -> READ FILES**

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *f;

    f = fopen("main.txt", "r+");
    
    if(f == NULL){
        perror("\nERROR - OPEN FILE \n");
        exit(0);
    }
    else{
        printf("\ntest\n");
    }
    
    fclose(f);

    return 0;
}
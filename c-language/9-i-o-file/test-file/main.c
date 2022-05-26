//**TESTS -> READ FILES**

#include <stdio.h>
#include <stdlib.h>

//**PROTOTYPE**
int file_is_ok(FILE* f);

int main(void){
    FILE *f;

    f = fopen("main.txt", "r+");
    
    if(f == NULL){
        printf("\nData base error.\n");
        exit(0);
    }
    else{
        printf("\ntest\n");
    }
    
    fclose(f);

    return 0;
}
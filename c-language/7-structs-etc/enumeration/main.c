#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void){
    enum numbers {one, two, three};
    enum numbers num[3];

    num[0] = one;
    num[1] = two;
    num[2] = three;

    for(int i = 0; i < 3; i++){
        if(num[i] == one){
            printf("\n1\n");
        }
        else if(num[i] == two){
            printf("\n2\n");
        }
        else if(num[i] == three){
            printf("\n3\n");
        }
        else{
            exit(0);
        }
    }

    return 0;
}
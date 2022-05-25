#include <stdio.h>
#include <stdlib.h>
#include "main.h"

enum numbers {one, two, three};
enum numbers num[3];

void define_enum(){
    num[0] = one;
    num[1] = two;
    num[2] = three;
}

void conditions(int ind_cond){
    if(num[ind_cond] == one){
        printf("\n1\n");
    }
    else if(num[ind_cond] == two){
        printf("\n2\n");
    }
    else if(num[ind_cond] == three){
        printf("\n3\n");
    }
    else{
        exit(0);
    }
}

void general_loop(){
    for(int i = 0; i < 3; i++){
        conditions(i);
    }
}

int main(void){
    define_enum();
    general_loop();

    return 0;
}
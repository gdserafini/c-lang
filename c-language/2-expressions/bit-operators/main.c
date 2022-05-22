//1º bits<<1   2º bits ~   3º bits >>1   -> considering the first byte (int)

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void enter_password(int password[NUM]){
    for(int i = 0; i < NUM; i++){
        printf("Enter a number (max: 127 and > 0): ");
        scanf("%d", &password[i]);
    }

    printf("\n%d %d %d\n", password[0], password[1], password[2]);
}

void encrypt(int password[NUM]){
    for(int i = 0; i < NUM; i++){
        password[i] = password[i] << 1;
        password[i] = ~password[i];
    }

    printf("\n%d %d %d\n", password[0], password[1], password[2]);
}

void descrypt(int password[NUM]){
    for(int i = 0; i < NUM; i++){
        password[i] = ~password[i];
        password[i] = password[i] >> 1;
    }

    printf("\n%d %d %d\n", password[0], password[1], password[2]);
}

int is_possible(int password[NUM]){   
    if(password[0] > 127 || password[0] < 0 
    || password[1] > 127 || password[1] < 0 
    || password[2] > 127 || password[2] < 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){    
    int password[NUM];

    enter_password(password);
    
    if(is_possible(password)){
        encrypt(password);
        descrypt(password);
    }
    else{
        printf("\nERROR\n");
        exit(0);
    }

    return 0;
}
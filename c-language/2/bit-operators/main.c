//bitwise operators (&, !, ^, ~, >>, <<)
//"numeric password encryption" -> 2x -> compl bits (and back) - max number = 127 (01111111) -> last byte 

#include <stdio.h>
#include "main.h"

int password[NUM];

void enter_password(){
    for(int i = 0; i < NUM; i++){
        printf("Enter a number (max: 127): ");
        scanf("%d", &password[i]);
    }

    printf("\n%d %d %d\n", password[0], password[1], password[2]);
}

void encrypt(){
    for(int i = 0; i < NUM; i++){
        password[i] = password[i] << 1;
        password[i] = ~password[i];
        //password[i] = password[i] & 253; (test for n = 1 -> 2x -> ~ bits -> & -> | 1 -> 253 positive)
    }

    printf("\n%d %d %d\n", password[0], password[1], password[2]);
}

void descrypt(){
    for(int i = 0; i < NUM; i++){
        //password[i] = password[i] | 4294967293; (test line 22)
        password[i] = ~password[i];
        password[i] = password[i] >> 1;
    }

    printf("\n%d %d %d\n", password[0], password[1], password[2]);
}

int main(){    
    enter_password();
    encrypt();
    descrypt();

    return 0;
}
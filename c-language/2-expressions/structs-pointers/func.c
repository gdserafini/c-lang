#include <stdio.h>
#include "main.h"

void cont(NUM* n){
    for(int i = 0; i < LEN; i++){
        n->number1[i] = i + 1;
        n->number2[i] = (i + 1) * 2;
    }
}

void sum_n(int* s, NUM* n){
    for(int i = 0; i < LEN; i++){
        (*s) = (*s) + n->number1[i] + n->number2[i];
    }
}

void print(int* s, NUM* n){
    for(int i = 0; i < LEN; i++){
        printf("\n%d %d\n", n->number1[i], n->number2[i]);
    }

    printf("\n%d\n", (*s));
}
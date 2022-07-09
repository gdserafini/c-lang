#include <stdio.h>
#include "main.h"

void values(NUM* n){
    for(int i = 0; i < LEN; i++){
        n->number1[i] = i + 1;
        n->number2[i] = (i + 1) * 2; //values
    }
}

void sum_arrays(NUM n){
    int sum = 0;

    for(int i = 0; i < LEN; i++){
        sum = sum + n.number1[i] + n.number2[i]; //um arrays
    }

    print(sum, n);
}

void print(int sum, NUM n){
    for(int i = 0; i < LEN; i++){
        printf("\n%d %d\n", n.number1[i], n.number2[i]);
    }

    printf("\n%d\n", sum);
}
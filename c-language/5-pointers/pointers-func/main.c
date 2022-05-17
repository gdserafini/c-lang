#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int sum(int x, int y){
    return x + y;
}

int mult(int x, int y){
    return x * y;
}

int general(int (*p)(int,int), int a, int b){
    return p(a, b);
}

int main(){
    int (*pf)(int (*)(int, int), int, int), ans, num1, num2, result;

    pf = general;
    num1 = num2 = 10;

    printf("\n1 for add, 2 for mult: ");
    scanf("%d", &ans);

    switch(ans){
        case 1:
            result = pf(sum, num1, num2);
            break;
        case 2:
            result = pf(mult, num1, num2);
            break;
        default:
            printf("\nERROR");
            exit(0);
    }

    printf("\n%d\n", result);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int calc_is_possible(int x, int y){
    if(y != 0 && x < 2147483647 && y < 2147483647){
        return 1;
    }
    else{
        return 0;
    }
}

int addition(int x, int y){
    return x + y;
}

int subtraction(int x, int y){
    return x - y;
}

int multiplication(int x, int y){
    return x * y;
}

int division(int x, int y){
    return x / y;
}

int exponentiation(int x, int y){
    int res = 1;

    for(int i = 0; i < y; i++){
        res = res * x;
    }

    return res;
}

int functions(int (*pf)(int, int), int x, int y){
    return pf(x, y);
}

int main(){
    int num1, num2, option, result;
    int (*pm)(int (*)(int, int), int, int);

    pm = functions;

    printf("\nEnter a number: ");
    scanf("%d", &num1);

    printf("Enter other number: ");
    scanf("%d", &num2);

    if(calc_is_possible(num1, num2)){
        printf("\n1 to add, 2 to sub, 3 to mult, 4 for div or 5 for exp: ");
        scanf("%d", &option);

        switch(option){
            case 1:
                result = pm(addition, num1, num2);
                break;
            case 2:
                result = pm(subtraction, num1, num2);
                break;
            case 3:
                result = pm(multiplication, num1, num2);
                break;
            case 4:
                result = pm(division, num1, num2);
                break;
            case 5:
                result = pm(exponentiation, num1, num2);
                break;
            default:
                printf("\nERROR2\n");
                exit(0);
        }
    }
    else{
        printf("\nERROR1\n");
        exit(0);
    }

    printf("\n%d\n", result);

    return 0;
}
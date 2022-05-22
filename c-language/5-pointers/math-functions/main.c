#include <stdio.h>
#include <stdlib.h>
#include "main.h"

NUM n;

int calc_is_possible(){
    if(n.num2 == 0 || n.num1 > 2147483647 || n.num2 > 2147483647){
        return 0;
    }
    else{
        return 1;
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

int functions(int (*pf)(int, int), int x, int y){  //function pointer
    return pf(x, y);
}

void enter_numbers(){
    printf("\nEnter a number: ");
    scanf("%d", &n.num1);

    printf("Enter other number: ");
    scanf("%d", &n.num2);
}

void enter_option(int* op){
    printf("\n1 to add, 2 to sub, 3 to mult, 4 for div or 5 for exp: ");
    scanf("%d", op);
}

void switch_func(int op){
    int (*pm)(int (*)(int, int), int, int);   //funtion pointer of function pointers

    pm = functions;   //select -> function pointer

    switch(op){
        case 1:
            n.result = pm(addition, n.num1, n.num2);
            break;
        case 2:
            n.result = pm(subtraction, n.num1, n.num2);
            break;
        case 3:
            n.result = pm(multiplication, n.num1, n.num2);
            break;
        case 4:
            n.result = pm(division, n.num1, n.num2);
            break;
        case 5:
            n.result = pm(exponentiation, n.num1, n.num2);
            break;
        default:
            printf("\nERROR2\n");
            exit(0);
    }
}

void calculus(){
    int option;

    if(calc_is_possible()){   //int -> num2 != 0
        enter_option(&option);
        switch_func(option);
    }
    else{
        printf("\nERROR1\n");
        exit(0);
    }
}

int main(){
    enter_numbers();   //2 numbers -> struct
    calculus();

    printf("\n%d\n", n.result);

    return 0;
}
#include <stdio.h>
#include "main.h"

int fatorial(int num_fatorial){     //ex: number = 3 -> 3 * fatorial(3-1) -> 3 * 2 * fatorial(2 - 1) -> 3 * 2 * 1 (return 6)
    if(num_fatorial == 1){
        return 1;
    }
    else{
        return num_fatorial * fatorial(num_fatorial-1);
    }
}

int fibonacci(int num_fibonacci){
    if(num_fibonacci == 0){
        return 1;
    }
    else if(num_fibonacci == 1){
        return 1;
    }
    else{
        return fibonacci(num_fibonacci-1) + fibonacci(num_fibonacci-2);
    }
}

void enter_number(int *num_enter){
    printf("\nEnter a number: ");
    scanf("%d", num_enter);
}

void print_intro(){
    printf("\n     **Recursion**\n");
    printf("**Fatorial and Fibonacci**\n");
}

int main(){
    int number;

    print_intro();
    enter_number(&number);
    printf("\nFatorial of %d: %d\n", number, fatorial(number));
    printf("Fibonacci of %d: %d\n\n", number, fibonacci(number));

    return 0;
}
#include <stdio.h>
#include "main.h"

int *pick_pointer(int *num_p_pointer){
    return num_p_pointer;
}

void enter_number(int *num_enter){
    printf("\nEnter a number: ");
    scanf("%d", num_enter);
}

void print_num_pointer(int num_print, int *poin_print){
    printf("\nNumber: %d", num_print);
    printf("\nPointer: %p\n\n", poin_print);
}

int main(){
    int number, *pointer = pick_pointer(&number); 

    enter_number(&number);
    print_num_pointer(number, pointer);

    return 0;
}
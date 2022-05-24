#include <stdio.h>
#include "main.h"

int *pick_pointer(int *num){
    return num;
}

void enter_number(int *num){
    printf("\nEnter a number: ");
    scanf("%d", num);
}

void print_num_pointer(int num, int *poin){
    printf("\nNumber: %d", num);
    printf("\nPointer: %p\n\n", (void *)poin);
}

int main(){
    int number, *pointer; 

    enter_number(&number);
    pointer = pick_pointer(&number);
    print_num_pointer(number, pointer);

    return 0;
}
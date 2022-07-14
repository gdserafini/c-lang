/* ORDER -> QUICK SORT (TEST - 10 NUMBERS) */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void print_numbers(int *numbers);
void swap_numbers(int *n1, int *n2);
void quick_sort(int *numbers, int left, int right);

int main(void){
    int numbers[SIZE] = {100,6,2,33,19,20,23,25,30,40};
    
    /* MAIN ALGORITM */
    print_numbers(numbers);
    quick_sort(numbers, 0, SIZE-1);
    print_numbers(numbers);

    return 0;
}

void print_numbers(int *numbers){
    printf("\n");

    for(int i = 0; i < SIZE; i++){
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

/* SWAP 2 NUMBERS (INT) */
void swap_numbers(int *n1, int *n2){
    int aux;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

/* QUICK SORT MAIN ALGORITM */
void quick_sort(int *numbers, int left, int right){
    int i = left, j = right;
    int x = numbers[(left+right)/2], y;

    do{
        while(numbers[i] < x && i < right){ 
            i++;
        }
        while(x < numbers[j] && j > left){
            j--;
        }

        if(i <= j){
            swap_numbers(&numbers[i], &numbers[j]);
            i++;
            j--;
        }
    }while(i <= j);

    if(left < j){
        quick_sort(numbers, left, j);
    }
    if(i < right){
        quick_sort(numbers, i, right);
    }
}
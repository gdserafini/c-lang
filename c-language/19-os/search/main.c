/* QSORT -> BINARY SEARCH (ALEATORY NUMBER) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void sequential_search(int *numbers, int key);
int binary_search(int *numbers, int key);
int comp_num(const void *a, const void *b);

int main(void){
    srand(time(0));

    int numbers[SIZE] = {3,6,10,23,44,78,100,25,76,3};
    int position = rand() % 9; //Select aleatory number from array 

    /* MAIN ALGORITM */
    //sequential_search(numbers, numbers[position]);
    qsort(numbers, SIZE, sizeof(int), comp_num);
    int p = binary_search(numbers, numbers[position]);
    printf("\nNumber: %d\nPosition: %d\n", numbers[position], p+1);

    return 0;
}

void sequential_search(int *numbers, int key){
    for(int i = 0; i < SIZE; i++){
        if(key == numbers[i]){
            printf("\nNumber: %d\nPosition: %d\n", key, i+1);
            break;
        }
    }
}

/* ORDER */
int binary_search(int *numbers, int key){
    int begin = 0, length = SIZE-1, mid;

    while(begin <= length){
        mid = (length+begin)/2;

        if(key < numbers[mid]){
            length = mid-1;
        }
        else if(key > numbers[mid]){
            begin = mid+1;
        }
        else{
            return mid;
        }
    }

    return -1;
}

/* COMP -> QSORT */
int comp_num(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
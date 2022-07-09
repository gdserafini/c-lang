#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void choose(int op){
    switch(op){
        case 1:
            mem_alloc1();
            break;
        case 2:
            mem_alloc2();
            break;
        default:
            printf("\nERROR\n");
            exit(0);
    }
}

void atrib_print1(int *array){
    printf("\n");

    for(int i = 0; i < SIZE; i++){
        array[i] = i;

        printf("%d ", array[i]);
    }

    printf("\n\n");
}

void atrib_print2(int **matrix){
    printf("\n");

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            matrix[i][j] = i + j;
            
            printf("%d ", matrix[i][j]);
        }

        printf("\n\n");
    }
}

void mem_alloc1(){
    int* array = (int *)malloc(sizeof(int) * SIZE);

    if(array = malloc(12)){
        atrib_print1(array);
    }
    else{
        printf("\nERROR\n");
        exit(0);
    }

    free(array);
}

void mem_alloc2(){
    int** matrix = (int **)malloc(sizeof(int*) * SIZE);

    for(int i = 0; i < SIZE; i++){
        matrix[i] = (int *)malloc(sizeof(int) * SIZE);
    }

    if(matrix[0] = malloc(12)){
        atrib_print2(matrix);
    }
    else{
        printf("\nERRO\n");
        exit(0);
    }

    for(int i = 0; i < SIZE; i++){
        free(matrix[i]);
    }

    free(matrix);
}

void enter_option(int* op){
    printf("\n1 for allocate the array, 2 for allocate the matrix: ");
    scanf("%d", op);
}

void print_intro(){
    printf("\n**Memory allocation**\n");
}

int main(){
    int option;

    print_intro();
    enter_option(&option);
    choose(option);

    return 0;
}
/* ORDER NUMBERS -> BUBBLE */
/* DO-FOR -> MORE EFFICIENT THAN FOR-FOR */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "head.h"

int main(void){ 
    double init = get_time();//BEGIN - TIME 

    /* MAIN ALGORITM */
    int numbers[SIZE] = {8,1,15,77,54,100,2,44,4,48};

    order_bubble(numbers);
    print_numbers(numbers);

    double end = get_time();//END - TIME
    print_time(init, end);

    return 0;
}

void order_bubble(int *num){
    int aux, there_op;

    do{
        there_op = 0; //BEGIN -> NO OPERATION

        for(int i = 0; i < SIZE - 1; i++){
            if(num[i] > num[i+1]){
                swap_order(&num[i], &num[i+1]);

                there_op = 1;
            }
        }
    }while(there_op);  //WHILE THERE ARE OPERATION TO DO
}

void swap_order(int *n1, int *n2){    
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void print_numbers(int *num){
    printf("\n");

    for(int i = 0; i < SIZE; i++){
        printf("%d ", num[i]);
    }

    printf("\n");
}

double get_time(){
    clock_t time = clock(); 
    return (double)time; //RETURN CLOCK_T AS DOUBLE
}

void print_time(double init, double end){
    double time = (end - init)/CLOCKS_PER_SEC;
    printf("\nElapsed time: %f seconds.\n", time);
}
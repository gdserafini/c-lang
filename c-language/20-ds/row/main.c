/* DATA STRUCT -> ROW (EXEMPLE: ROW(numbers 1-10)) */

#include <stdio.h>
#include <stdlib.h>

#define ROW_SIZE 10

void init_array(int *array);
void put_row(int *array);
void remove_row(int *array);
void print_row(int *array);
void version1(int *array);
void version2(int *array);
void swap_position(int *array);

int ip = 0, ir = 0; //ROW IND

/* MAIN ALGORITM */
int main(void){
    int numbers[ROW_SIZE];

    init_array(numbers);
    version1(numbers);
    init_array(numbers);
    ip = 0; ir =0;
    version2(numbers);

    return 0;
}

/* FUNCTIONS */
void init_array(int *array){
    for(int i = 0; i < ROW_SIZE; i++){
        array[i] = 0;
    }
}

/* PUT NUMBER ON THE ROW */
void put_row(int *array){
    array[ip] = ip+1;
}

/* REMOVE (=0) */
void remove_row(int *array){
    array[ir] = 0;
}

void print_row(int *array){
    for(int i = 0; i < ROW_SIZE; i++){
        if(array[i] == 0){    
            printf("  ");
        }
        else{
            printf(" %d", array[i]);
        }
    }
    printf("\n");
}

/* NO CHANGE OF POSITION */
void version1(int *array){
    do{
        put_row(array);
        print_row(array);
        ip++;
    }while(ip < 10);

    do{
        remove_row(array);
        print_row(array);
        ir++;
    }while(ir < 10);
}

/* THE ROW MOVES */
void version2(int *array){
    do{
        put_row(array);
        print_row(array);
        ip++;
    }while(ip < 10);
    ip--;

    do{
        remove_row(array);
        swap_position(array);
        print_row(array);
        ip--;
    }while(ip > -1);
}

void swap_position(int *array){
    for(int i = 0; i < ROW_SIZE-1; i++){
        array[i] = array[i+1];
    }
    array[ip] = 0;
}
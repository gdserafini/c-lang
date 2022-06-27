/* DATA STRUCTURE -> STACK (EXEMPLE NUMBERS 1-10) */
/* LAST IN, FIRST OUT */

#include <stdio.h>

#define STC_SIZE 10

void push_stack(int *array);
int pop_stack(int *array, int i);
void remove_stack(int *array, int i);
void put_numbers(int *array);
void remove_numbers(int *array);
void print_numbers(int *array);

/* GLOBAL COUNTERS */
int ipush = 0, ipop = 0, count = 0;

int main(void){
    int numbers[STC_SIZE] = {0,0,0,0,0,0,0,0,0,0};

    /* MAIN ALGORITM */
    put_numbers(numbers);
    remove_numbers(numbers);

    return 0;
}

/* STACK - IN/OUT FUNCTIONS */
void push_stack(int *array){
    if(count <= 10){
        array[ipush] = (ipush + 1);
    }
}

int pop_stack(int *array, int i){
    if(count > 0){
        return array[i];
    }
}

void remove_stack(int *array, int i){
    array[i] = 0;
}
/**/

/* NUM = IPUSH + 1 */
void put_numbers(int *array){
    print_numbers(array);

    do{
        push_stack(array);
        if(ipush == 0){ //ERRO-> IF PRINT PUSH_STACK
            int num = 1;
            printf("%d\n", num);
        }
        else{
            print_numbers(array);
        }
        ipush++; count++;
    }while(count < 10);

    ipush--;
}

/* NUM = 0 -> UNPRINTED */
void remove_numbers(int *array){
    ipop = count - 1;

    do{
        remove_stack(array, ipop);
        print_numbers(array);
        ipop--; count--;
    }while(count > 0);
}

/* SPACE */
void print_numbers(int *array){
    for(int i = 0; i < STC_SIZE; i++){
        if(array[i] == 0){
            printf("  ");
        }
        else{
            printf("%d ", pop_stack(array, i));
        }
    }
    printf("\n");
}
/* DATA STRUCT -> FIFO
QUEUE (EXEMPLE: 10 RANDOM NUMBERS */

#include <stdio.h>
#include <stdlib.h>

#define QSIZE 10

int spos = 0, rpos = 0;
int numbers[QSIZE];

void qstore(int number_store);
void qretrieve(void);
void print_numbers(void);
void init_array(void);

int main(void){
    int snumber, answer, choose;

    /* MAIN ALGORITM */
    printf("\n***Queue exemple 10 numbers***\n");
    init_array();

    for( ; ; ){ //INFINITE LOOP
        printf("\nWhat do you want do?\n");
        printf("1 to store a number, 2 to retrieve the first number: ");
        scanf(" %d", &choose); //CHOOSE IN QUEUE

        switch(choose){ //QSTORE OR QRETRIEVE AND PRINT
            case 1:
                printf("\nEnter the number you want store: ");
                scanf(" %d", &snumber);
                qstore(snumber);
                print_numbers();
                break;
            case 2:
                qretrieve();
                print_numbers();
                break;
            default:
                printf("\nEnter 1 or 2.\n");
                break;
        }
    }

    return 0;
}

/* FUNCTIONS */
void qstore(int number_store){ //IN
    if(spos == QSIZE){
        printf("\nFull.\n");
    }
    else{
        numbers[spos] = number_store;
        spos++;
    }
}

//OUT
void qretrieve(){
    if(rpos == spos){
        printf("\nEmpty.\n");
    }
    else{
        numbers[rpos] = '\0';
        rpos++;
    }
}

void print_numbers(){
    printf("\n");

    for(int i = 0; i < QSIZE; i++){
        if(numbers[i] == '\0'){
            printf("   ");
        }
        else{
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");
}

void init_array(){
    for(int i = 0; i < QSIZE; i++){ //INIT ARRAY -> NULL
        numbers[i] = '\0';
    }
}
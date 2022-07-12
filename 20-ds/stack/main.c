/* DATA STRUCTURE -> STACK (EXEMPLE - 10 NUMBERS */
/* LAST IN, FIRST OUT */

#include <stdio.h>

#define SSIZE 10

void init_array(void);
void pop_stack(void);
void push_stack(int number);
void print_numbers(void);

/* GLOBAL COUNTERS/ARRAY */
int stackpos = 0;
int numbers[SSIZE];

int main(void){
    int choose, pnumber;

    /* MAIN ALGORITM */
    printf("\n***Stack exemple (10 numbers)***\n");
    init_array();

    for( ; ; ){
        printf("\nWhat do you want do?\n");
        printf("1 to push a number, 2 to pop the last number: ");
        scanf(" %d", &choose); //CHOOSE IN STACK

        /* PUSH (AND ENTER A NUMBER) OR POP */
        switch(choose){
            case 1:
                printf("\nEnter the number you want push: ");
                scanf(" %d", &pnumber);
                push_stack(pnumber);
                print_numbers();
                break;
            case 2:
                pop_stack();
                print_numbers();
                break;
            default:
                printf("\nEnter 1 or 2.\n");
                break;
        }
    }

    return 0;
}

void init_array(){
    for(int i = 0; i < SSIZE; i++){
        numbers[SSIZE] = '\0';
    }
}

void pop_stack(){
    stackpos--;

    if(stackpos < 0){
        printf("\nEmpty\n");
    }
    else{
        numbers[stackpos] = '\0';
    }
}

void push_stack(int number){
    if(stackpos == SSIZE){
        printf("\nFull.\n");
    }
    else{
        numbers[stackpos] = number;
        stackpos++;
    }
}

void print_numbers(){
    printf("\n");

    for(int i = 0; i < SSIZE; i++){
        if(numbers[i] == '\0'){
            printf("   ");
        }
        else{
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");
}
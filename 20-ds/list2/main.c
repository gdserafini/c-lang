/* DATA STRUCTURE -> DOUBLY LINKED LIST*/
/* EXEMPLE -> 10 NUMBERS*/

#include <stdio.h>
#include <stdlib.h>

#define LSIZE 10

/* STRUCT WITH AN INT NUMBER AND ADDRESS FOR THE NEXT AND PREVIUOS STRUCT */
struct numbers{
    int num;
    struct numbers *next;
    struct numbers *prev;
};

void slstore(struct numbers *n);
void init_list(struct numbers *n);
void print_list(struct numbers *n);

int main(void){
    struct numbers n[LSIZE];

    /* MAIN ALGORITM */
    printf("\n***Linked list exemple (10 numbers)***\n");
    init_list(n);
    /* CREATE/OUT LIST */
    slstore(n);
    print_list(n);

    return 0;
}

void init_list(struct numbers *n){
    for(int i = 0; i < LSIZE; i++){
        n[i].num = '\0';
        n[i].next = NULL;
    }
}

/* CREATE THE LINKED LIST */
void slstore(struct numbers *n){
    for(int i = 0; i < LSIZE-1; i++){
        printf("\nEnter a number you want put in the list: ");
        scanf(" %d", &n[i].num);

        n[i].next = &n[i+1];
    }

    printf("\nEnter a number you want put in the list: ");
    scanf(" %d", &n[9].num);
    n[9].next = &n[0];
}

void print_list(struct numbers *n){
    printf("\nNumber: %d\nAddress: %d", n[0].num, n[9].next);
    
    for(int i = 1; i < LSIZE; i++){
        printf("\nNumber: %d\nAddress: %d", n[i].num, n[i-1].next);
    }

    printf("\n\n");
}
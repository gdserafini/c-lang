/* DATA STRUCTURE -> SINGLY LINKED LIST*/
/* EXEMPLE -> 10 NUMBERS*/

#include <stdio.h>
#include <stdlib.h>

#define LSIZE 10

/* STRUCT WITH AN INT NUMBER AND ADDRESS FOR THE NEXT STRUCT */
struct numbers{
    int num;
    struct numbers *next;
};

void slstore(struct numbers *n);
void init_list(struct numbers *n);
void print_list_address(struct numbers *n);

int main(void){
    struct numbers n[LSIZE];

    /* MAIN ALGORITM */
    printf("\n***Linked list exemple (10 numbers)***\n");
    init_list(n);
    /* CREATE/OUT LIST */
    slstore(n);
    print_list_address(n);

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
}

void print_list_address(struct numbers *n){
    printf("\n\n");

    while(n){
        printf("\nPointer: %d", n->next);
        n = n->next;
    };

    printf("\n\n");
}
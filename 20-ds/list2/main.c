/* DATA STRUCTURE -> DOUBLY LINKED LIST*/
/* EXEMPLE -> 10 NUMBERS*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LSIZE 10
#define NMAX 100

/* STRUCT WITH AN INT NUMBER AND ADDRESS FOR THE NEXT AND PRIOR STRUCT */
struct numbers{
    int num;
    struct numbers *next;
    struct numbers *prior;
};

void dlstore(struct numbers *n);
void init_list(struct numbers *n);
void print_list_address(struct numbers *n);
int pointer_defined(struct numbers *n);

int main(void){
    struct numbers n[LSIZE];

    /* MAIN ALGORITM */
    srand(time(0));
    printf("\n***Linked list exemple (10 numbers)***\n");
    init_list(n);
    /* CREATE/OUT LIST */
    dlstore(n);
    print_list_address(n);

    return 0;
}

void init_list(struct numbers *n){
    for(int i = 0; i < LSIZE; i++){
        n[i].next = NULL;
        n[i].prior = NULL;
    }
}

/* CREATE THE LINKED LIST */
void dlstore(struct numbers *n){
    n[0].num = rand() % NMAX;
    n[0].next = &n[1];

    for(int i = 1; i < LSIZE-1; i++){
        n[i].num = rand() % NMAX;
        n[i].next = &n[i+1];
        n[i].prior = &n[i-1];
    }

    n[9].num = rand() % NMAX;
    n[9].prior = &n[8];
}

void print_list_address(struct numbers *n){
    printf("\n");

    while(pointer_defined(n)){
        printf("\nNumber: %d", n->num);
        printf("\n  Prior: %d", n->prior);
        printf("\n  Next: %d\n", n->next);
        n = n->next;
    }    

    printf("\n");
}

int pointer_defined(struct numbers *n){
    if(n){
        return 1;
    }
    else{
        return 0;
    }
}
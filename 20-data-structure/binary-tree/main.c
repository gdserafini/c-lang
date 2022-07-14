/* BINARY TREE 
EXEMPLE - ORDERED 10 NUMBERS */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TSIZE 15
#define NMAX 100

struct numbers{
    int num;
    struct numbers *right;
    struct numbers *left;
};

void init_tree(struct numbers *n);
void stree(struct numbers *n);
void print_address(struct numbers *n);

int key = TSIZE/2;

int main(void){
    struct numbers n[TSIZE];

    /* MAIN ALGORITM */
    srand(time(0));
    init_tree(n);
    stree(n);
    print_address(n);

    return 0;
}

void init_tree(struct numbers *n){
    for(int i = 0; i < TSIZE; i++){
        n[i].right = NULL;
        n[i].left = NULL;
    }
}

void stree(struct numbers *n){
    
}

void print_address(struct numbers *n){
    
}
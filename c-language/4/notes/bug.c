#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void check_notes(int* sum_n, NOTES* n){
    for(int i = 0; i < STUD; i++){
        if(n->notes[i] == '\0'){
            (*sum_n)++;
        }               
    }
}

void check_names(int* sum2_c, NOTES* n){
    for(int i = 0; i < STUD; i++){
        if(n->names[i] == '\0'){
            (*sum2_c)++;
        }
    }
}

int check(NOTES* n){
    int sum = 0, sum2 = 0;

    check_notes(&sum, n);
    check_names(&sum2, n);

    if(sum == 30 || sum2 == 30){
        return 0;
    }
    else{
        return 1;
    }
}
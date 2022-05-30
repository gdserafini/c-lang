#include "lib.h"

void alloc_class_size(int qnt_stud, STUD* s){
    s->notes = (int *)malloc(sizeof(int) * qnt_stud);

    s->names = (char **)malloc(sizeof(char *) * qnt_stud);

    for(int i = 0; i <qnt_stud - 1; i++){
        s->names[i] = (char *)malloc(sizeof(char) * STR_LEN);
    }
}

void free_mem(int qnt_stud, STUD* s){
    free(s->notes);

    for(int i = 0; i < qnt_stud - 1; i++){
        free(s->names[i]);
    }

    free(s->names);
}
#include "lib.h"

extern char letter[ALPHA];

void enter_class_size(int *qnt_stud){
    fputs("\nEnter the number of students: ", stdout);
    scanf("%d", qnt_stud);
    fflush(stdin);

    if(*qnt_stud == 0){
        fputs("\nFINISHED\n", stdout);
        fputs(__DATE__ __TIME__, stdout);
        exit(0);
    }
}

void enter_names(int qnt_stud, STUD* s){
    for(int i = 0; i < qnt_stud - 1; i++){
        fputs("\nEnter a name: ", stdout);
        fgets(s->names[i], STR_LEN, stdin);
    }
}

void enter_notes(int qnt_stud, STUD* s){
    for(int i = 0; i < qnt_stud - 1; i++){
        printf("\nEnter the %s's note: ", s->names[i]);
        scanf("%d", &s->notes[i]);
        fflush(stdin);
    }
}
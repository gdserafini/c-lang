#include "lib.h"

extern char letter[STR_LEN];

void order_or_search(int qnt_stud, STUD* s){
    int select;
    char answer;

    order_name1(qnt_stud, s);

    do{
        print_select(&select);
        options(qnt_stud, select, s);
        print_answer(&answer);
    }while(answer != 'N');
}

void print_select(int *select){
    fputs("\nWhat you want do?\n", stdout);
    fputs("\n1 for order, 2 for search: ", stdout);
    scanf("%d", select);
    fflush(stdin);
}

void print_answer(char *answer){
    fputs("Do you want repeat? [Y/N]", stdout);
    *answer = fgetc(stdout);
}

void options(int qnt_stud, int select, STUD* s){
    switch(select){
        case 1:
            order_stud(qnt_stud, s);
            break;
        case 2:
            search_stud(qnt_stud, s);
            break;
        default:
            fputs("\nERROR\n", stdout);
            fputs(__DATE__ __TIME__, stdout);
            exit(0);
    }
}

void search_stud(int qnt_stud, STUD* s){
    char name_search[STR_LEN];

    enter_name(name_search);

    for(int i = 0; i < qnt_stud - 1; i++){
        if(name_search == s->names[i]){
            printf("Name: %s", s->names[i]);
            printf("Note: %d", s->notes[i]);
            break;
        }
    }
}

void enter_name(char *name_search){
    fputs("\nEnter a name you want find: ", stdout);
    fgets(name_search, STR_LEN, stdin);
}
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

STUD st[SIZE];   

int no_students(){
    int count = 3;

    for(int i = 0; i < SIZE; i++){
        if(st[i].name[0] == '\0'){
            count--;
        }
    }

    if(count == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void enter_name(int ind_e_name){
    printf("\nEnter the %dº name: ", ind_e_name+1);
    scanf("%s", st[ind_e_name].name);
}

void enter_note(int ind_e_note){
    printf("\nEnter the note of %s: ", st[ind_e_note].name);
    scanf("%d", &st[ind_e_note].note);
}

void enter_infos(){
    for(int i = 0; i < SIZE; i++){
        enter_name(i);
        enter_note(i);
    }
}

void print_name(int ind_p_name){
    printf("\n%s", st[ind_p_name].name);
}

void print_note(int ind_p_note){
    printf("\n%d", st[ind_p_note].note);
}

void print_students(){
    for(int i = 0; i < SIZE; i++){
        print_name(i);
        print_note(i);
    }
}

void find_students(){
    char name_want_find[LEN];

    printf("\nEnter the name you want find: ");
    scanf("%s", name_want_find);

    int posi_find = search_student(name_want_find);

    printf("\nName: %s", st[posi_find].name);
    printf("\nNote: %d", st[posi_find].note);
}

int search_student(char *name_search){
    int position;

    for(int i = 0; i < SIZE; i++){
        if(name_search == st[i].name){
            position = i;
            break;
        }
    }

    return position;
}

int main(void){
    printf("\n   **Structs**\n**Student and note**\n\n");

    if(no_students()){
        enter_infos();
        //print_students();   //test  
    }
    else{
        printf("\nData base error.\n\n");
        exit(0);
    }

    find_students();

    return 0;
}
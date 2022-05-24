//STUD st[i] = 1 student -> SIZE = number of students

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

STUD st[SIZE];   

int no_students(){   //verif -> every st.name = '\0'
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
    printf("\nEnter the %dº name: ", ind_e_name+1);   //print order of names
    scanf("%s", st[ind_e_name].name);
}

void enter_note(int ind_e_note){
    printf("\nEnter the note of %s: ", st[ind_e_note].name);   //print name of this note
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

void print_students(){   //print all names and notes of this class
    for(int i = 0; i < SIZE; i++){
        print_name(i);
        print_note(i);
    }
}

int main(void){
    printf("\n   **Structs**\n**Student and note**\n\n");

    if(no_students()){
        enter_infos();
        print_students();    
    }
    else{
        printf("\nData base error.\n\n");
        exit(0);
    }

    return 0;
}
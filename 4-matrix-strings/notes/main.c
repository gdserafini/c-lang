#include <stdio.h>
#include <stdlib.h>
#include "main.h"

NOTES n;

void enter_names(){
    for(int i = 0; i < STUD; i++){
        printf("\nEnter a name: ");
        scanf("%s", n.names[i]);   
    }
}

void enter_notes(){
    for(int i = 0; i < STUD; i++){
        printf("\n%s", n.names[i]);  //name x: note x
        printf(": Enter a note: ");
        scanf("%d", &n.notes[i]);
    }
}

void find(){
    char name[LEN];

    printf("\nEnter the name: ");
    scanf("%s", &name);

    search(name);
}

void search(char name_search[LEN]){
    int position;

    for(int i = 0; i < STUD; i++){
        if(name_search == n.names[i]){
            position = i;   //i = line (names) = position (array notes)
        }
    }

    print(position, name_search);
}

void print(int posi, char name_print[LEN]){
    printf("\nStudent: %s\n", name_print);  //print name find() and note corresponding to matrix names
    printf("Note: %d\n", n.notes[posi]);   
}

void loop_find(){
    char answer;

    do{
        printf("Do you want find some student? [Y/N] ");
        scanf("%c", &answer);

        if(answer == 'Y'){
            if(has_error(n)){   // '\0' or 0 -> true
                printf("\nData base error.\n");
                exit(0);
            }
            else{  
                find();
            }
        }
    }while(answer != 'N');  //ans = 'N' -> finish too
}

int main(){
    printf("\nClass: names and notes\n");
    enter_names();
    enter_notes();
    loop_find();

    return 0;
}
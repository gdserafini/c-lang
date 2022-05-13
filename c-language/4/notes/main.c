#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
        printf("\n%s", n.names[i]);
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

void search(char name_s[LEN]){
    int position;

    for(int i = 0; i < STUD; i++){
        if(name_s == n.names[i]){
            position = i;
        }
    }

    print(position, name_s);
}

void print(int p, char name_p[LEN]){
    printf("\nStudent: %s\n", name_p);
    printf("Note: %d\n", n.notes[p]);
}

int main(){
    char ans = 'N';

    enter_names();
    enter_notes();

    do{
        printf("Do you want find some student? [Y/N] ");
        scanf("%c", &ans);

        if(ans == 'Y'){
            if(check(&n)){
                find();
            }
            else{
                printf("\nData base error.\n");
                exit(0);
            }
        }
    }while(ans != 'N');

    return 0;
}
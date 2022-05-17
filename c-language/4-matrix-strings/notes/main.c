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

void search(char name_s[LEN]){
    int position;

    for(int i = 0; i < STUD; i++){
        if(name_s == n.names[i]){
            position = i;   //i = line (names) = position (array notes)
        }
    }

    print(position, name_s);
}

void print(int p, char name_p[LEN]){
    printf("\nStudent: %s\n", name_p);  //print name find() and note corresponding to matrix names
    printf("Note: %d\n", n.notes[p]);   
}

int main(){
    char ans;

    enter_names();
    enter_notes();

    do{
        printf("Do you want find some student? [Y/N] ");
        scanf("%c", &ans);

        if(ans == 'Y'){
            if(check(&n)){
                find();
            }
            else{  //chech = 0 -> finish the algoritm
                printf("\nData base error.\n");
                exit(0);
            }
        }
    }while(ans != 'N');  //ans = 'N' -> finish too

    return 0;
}
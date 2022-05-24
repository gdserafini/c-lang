#include <stdio.h>
#include "main.h"

PERSON p[SIZE];

void print_intro(){
    printf("\n  **Adress**\n**Structs etc**\n\n");
}

void enter_answer(char *ans_enter){
    printf("\nDo you want find some person? [Y/N] ");
    scanf("%c", ans_enter);
}

int want_find(){
    char answer;

    enter_answer(&answer);

    if(answer == 'Y'){
        return 1;
    }
    else{
        return 0;
    }
}

void enter_name(int i){
    printf("\nEnter a name: ");
    scanf("%s", p[i].name);
}

void enter_age(int i){
    printf("\nEnter the age: ");
    scanf("%d", &p[i].age); 
}

void enter_gender(int i){
    printf("\nEnter the gender: [M/F] ");
    scanf("%c", &p[i].gender);
}

void enter_street(int i){
    printf("\nEnter the adress: (Only street name) ");
    scanf("%s", p[i].street);
}

void enter_zip(int i){
    printf("\nEnter the zip code: ");
    scanf("%d", &p[i].zip);    
}

void enter_infos(){
    for(int i = 0; i < SIZE; i++){
        enter_name(i);
        enter_age(i);
        enter_gender(i);
        enter_street(i);
        enter_zip(i);
    }
}

void enter_find(char *name_find){
    printf("\nEnter a name you want find: ");
    scanf("%s", name_find);
}

void print_infos(int i){
    printf("%s", p[i].name);
    printf("%d", p[i].age);
    printf("%c", p[i].gender);
    printf("%s", p[i].street);
    printf("%d", p[i].zip); 
}

void search(char *name_search){
    for(int i = 0; i < SIZE; i++){
        if(name_search == p[i].name){
            print_infos(i);   
            break;
        }
    }
}

void find(){
    char name[LEN], ans;

    enter_find(name);
    search(name);
}

int main(){
    print_intro();
    enter_infos();
    
    if(want_find()){
        find();
    }

    return 0;
}
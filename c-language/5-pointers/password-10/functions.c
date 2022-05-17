#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

void general(PASS* p){  // ''
    generate_password(p);
    print_password(p);
    verif_error(p);
}

void generate_password(PASS* p){
    generate_numbers(p);
    generate_strings(p);
}

void print_password(PASS* p){
    printf("\n");

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%d", p->number[i][j]);
        }
    }

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%c", p->strings[i][j]);
        }
    }

    printf("\n\n");
}

void generate_numbers(PASS* p){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            p->number[i][j] = rand() % 9;
        }
    }
}

void generate_strings(PASS* p){
    char letters[ALPHA] = 
    {'a', 'b', 'c', 'd', 'e', 'f', 
    'g', 'h', 'i', 'j', 'k', 'l', 
    'm', 'o', 'p', 'q', 'r', 't', 
    'u', 'v', 'w', 'x', 'y', 'z'};

    int num;

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            num = rand() % 23;

            p->strings[i][j] = letters[num];  //pick a aleatory letter from letter[] -> aleat i = num
        }
    }
}

void verif_error(PASS* p){ //equal or null
    int count1 = 0, count2 = 0;

    for(int i = 0; i < SIZE - 1; i++){
        if(p->number[i] == p->number[i+1]){
            count1++;
        }

        for(int j = 0; j < SIZE - 1; j++){
            if(p->strings[i][j] == p->strings[i][j+1]){
                count2++;
            }
            else if(p->strings[i][j] == '\0'){
                exit(0);
            }
        }
    }

    if(count1 == SIZE || count2 == SIZE){
        exit(0);
    }
}
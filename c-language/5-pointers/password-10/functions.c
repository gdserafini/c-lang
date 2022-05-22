#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

void general(PASS* p){  
    generate_password(p);
    
    if(has_error(*p)){
        printf("\nERROR\n");
        exit(0);
    }
    else{
        print_password(*p);
        printf("\nteste3\n");
    }
}

void generate_password(PASS* p){
    generate_numbers(p);
    generate_strings(p);
}

void print_password(PASS p){
    printf("\n");

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%d", p.number[i][j]);
        }
    }

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%c", p.strings[i][j]);
        }
    }

    printf("\n\n");
}

void generate_numbers(PASS* p){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            p->number[i][j] = rand() % 9;   //number[i] (0-9)
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
            num = rand() % 23;   //aleatory number -> i

            p->strings[i][j] = letters[num];  //pick a aleatory letter from letter[] -> aleat i = num
        }
    }
}

int has_error(PASS p){ //equal or null (all)
    int count_number = 0, count_strings = 0;
    int size_matrix = 100;

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(p.number[i][j] == 0){
                count_number++;
            }
            else if(p.strings[i][j] == '\0'){
                count_strings++;
            }
        }
    }

    if(count_number == size_matrix || count_strings == size_matrix){ //size = i x j
        return 1;                                                    
    }
    else{
        return 0;
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int check_notes(NOTES n){
    int count_notes = 0;

    for(int i = 0; i < STUD; i++){
        if(n.notes[i] == 0){
            count_notes++;
        }               
    }

    return count_notes;
}

int check_names(NOTES n){
    int count_names = 0;

    for(int i = 0; i < STUD; i++){
        if(n.names[i] == '\0'){
            count_names++;    
        }
    }

    return count_names;
}

int has_error(NOTES n){ 
    int count = check_notes(n); 
    int count2 = check_names(n);

    if(count == 30 || count2 == 30){    //check is false if every note or name = '\0'
        return 1;
    }
    else{
        return 0;
    }
}
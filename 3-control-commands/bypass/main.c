//control commands -> bypass commands

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

NUM n;

void generatte(){   //10 aletory numbers (0-100)
    srand(time(0));

    for(int i = 0; i < LEN; i++){
        n.num1[i] = rand() % MAX;
        n.num2[i] = rand() % MAX;
    }

    print();    //print numbers
}

int has_zero(){
    for(int i = 0; i < LEN; i++){   
        if(n.num1[i] == 0 || n.num2[i] == 0){
            return 1;
        }
    }

    return 0;
}

int all_the_same(){
    int count = 0;

    for(int i = 0; i < LEN - 1; i++){
        if(n.num1[i] == n.num1[i+1]){
            count++;
        }
        else if(n.num2[i] == n.num2[i+1]){
            count++;
        }
    }

    if(count == 20){
        return 1;
    }
    else{
        return 0;
    }
}

void compare(){
    int commons;

    if(has_zero()){     //has_zero = 1
        printf("\n\n0: Broken loop.");
        exit(0);    //terminate
    }
    else if(all_the_same()){   //2 arrays -> same number
        printf("\n\nAll the same: Broken loop.\n\n");
        exit(0);
    }
    else{
        commons = commons_arrays();
        printf("\n\nCommons: %d\n\n", commons);  //a single number in num2 common to every number in num1
    }
}

int commons_arrays(){
    int com = 0;

    for(int i = 0; i < LEN; i++){
        for(int j = 0; j < LEN; j++){
            if(n.num1[i] == n.num2[j]){
                com++;
                break;
            }
        }
    }

    return com;   
}

void print(){
    printf("\n");

    for(int i = 0; i < LEN; i++){
        printf("%d ", n.num1[i]);
    }

    printf("\n\n");

    for(int i = 0; i < LEN; i++){
        printf("%d ", n.num2[i]);
    }
}

int main(){
    generatte();      
    compare();
    
    return 0; 
}
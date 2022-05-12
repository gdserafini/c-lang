//control commands -> bypass commands

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

NUM n;
int qnt_zero = 0;

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
            qnt_zero++;
        }
    }

    for(int i = 0; i < LEN; i++){   //if it has zero -> finish the program
        if(n.num1[i] == 0 || n.num2[i] == 0){
            return 1;
        }
    }

    return 0;
}

void compare(){
    int common;

    if(has_zero()){     //has_zero = 1
        printf("\n\n0: Broken loop. %d", qnt_zero);
        printf("/100\n\n");
        exit(0);    //terminate
    }
    else{
        common = compare2();
        printf("\n\nCommons: %d\n\n", common);  //a single number in num2 common to every number in num1
    }
}

int compare2(){
    int c = 0;

    for(int i = 0; i < LEN; i++){
        for(int j = 0; j < LEN; j++){
            if(n.num1[i] == n.num2[j]){
                c++;
                break;
            }
        }
    }

    return c;   //commons
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
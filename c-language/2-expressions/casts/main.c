//casts

#include <stdio.h>
#include "main.h"

void switch_cast(int i, double numbers[COUNT]){
    switch(i){  //separate double and int
        case 0:
            printf("\n%d %d %d\n", (int) numbers[0]/1, (int) numbers[1]/1, (int) numbers[2]/1);
            break;
        case 1:
            printf("\n%d %d %d\n", (int) numbers[0]/2, (int) numbers[1]/2, (int) numbers[2]/2);
            break;
        case 2:
            printf("\n%d %d %d\n", (int) numbers[0]/4, (int) numbers[1]/4, (int) numbers[2]/4);
            break;
    }
}

void cast_numbers(double numbers[COUNT]){
    for(int i = 0; i < COUNT; i++){
        switch_cast(i, numbers);   //div (casts) -> double/int = int
    }
}

int main(){
    double numbers[COUNT] = {5.1000000000, 10.2000000000, 20.4000000000};

    cast_numbers(numbers);

    return 0;
}
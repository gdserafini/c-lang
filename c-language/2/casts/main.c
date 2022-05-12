//casts, functions(parameters)

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void switch_test(int j, double b[COUNT]){
    switch(j){  //(switch) for (double) not to conflict with (int) of (for) -> div double/int
            case 0:
                printf("\n%d %d %d\n", (int) b[0]/1, (int) b[1]/1, (int) b[2]/1);
                break;
            case 1:
                printf("\n%d %d %d\n", (int) b[0]/2, (int) b[1]/2, (int) b[2]/2);
                break;
            case 2:
                printf("\n%d %d %d\n", (int) b[0]/4, (int) b[1]/4, (int) b[2]/4);
                break;
        }
}

void for_test(double a[COUNT]){
    for(int i = 0; i < COUNT; i++){
        switch_test(i, a);
    }
}

void test(){
    double x[COUNT] = {5.1000000000, 10.2000000000, 20.4000000000};     //double to int

    for_test(x);
}

int main(){
    test();

    return 0;
}
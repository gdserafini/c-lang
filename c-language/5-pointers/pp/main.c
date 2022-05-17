#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(){
    int ans;
    void (*p1)();
    void (*p2)();

    printf("\n1 for *p, 2 for **p: ");
    scanf("%d", &ans);

    switch(ans){
        case 1:
            p1 = simple_point;
            p1();
            break;
        case 2:
            p2 = mult_point;
            p2();
            break;
        default:
            printf("\nERROR\n");
            exit(0);
    }

    return 0;
}

void simple_point(){
    int num, *p, x;

    num = 10;
    p = &num;
    x = *p;

    printf("\n%d\n", x);
    printf("\n%d\n", *p);
}

void mult_point(){
    int num, **p, *x, y;

    num = 20;
    x = &num;
    p = &x;
    y = **p;

    printf("\n%d\n", y);
    printf("\n%d\n", **p);
}
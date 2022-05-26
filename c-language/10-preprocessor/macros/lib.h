/* abs(num) -> MACRO ABS */
#define ABS(x) x < 0 ? -(x) : x
#define NUM -10
#line 2 "main-test.c"
#pragma once

void print_abs(){
    printf("\n");
    printf("%d", ABS(NUM));
    printf("\n");
}

void print_macros(){
    printf("\n%d\n", __LINE__);
    printf("\n%s\n", __FILE__);
    printf("\n%s\n", __DATE__);
    printf("\n%s\n", __TIME__);
    printf("\n%d\n", __STDC__);
}
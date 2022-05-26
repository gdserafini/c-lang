#include <stdio.h>
#include <string.h>
#include "lib.h"

void test1_print_str(){
    char string[12] = "Hello ";

    strcat(string, "world!");

    printf("\n");
    printf("%s", string);
    printf("\n");
}
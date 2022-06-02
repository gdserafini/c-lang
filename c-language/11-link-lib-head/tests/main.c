/* TEST */

#include <stdio.h>
#include <string.h>
#include "lib.h"

int main(void){
    test1_print_str();

    return 0;
}

void test1_print_str(){
    char string[STR_LEN] = "Hello ";

    strcat(string, "world!");

    printf("\n");
    printf("%s", string);
    printf("\n");
}
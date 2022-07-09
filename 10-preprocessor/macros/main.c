/* MACROS ANS DIRECTIVES */

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(void){
    #ifdef NUM
        #if ABS(NUM)
            print_abs();
        #else
            #error ABS ERROR
        #endif
    #endif

    #undef NUM

    #ifndef NUM
        #if ABS(NUM)
            print_abs();
        #else
            printf("\nERROR\n");
        #endif
    #endif

    #if defined NUM
        printf("\nDefined\n");
    #elif !defined NUM
        printf("\nUndefined\n");
    #endif

    print_macros();

    return 0;
}
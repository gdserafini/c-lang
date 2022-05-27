/* COPY .TXT TO ANOTHER */

#include <stdio.h>
#include "lib.h"

int main(void){
    int count_lines = 0;

    #if defined FILE1 && defined FILE2
        open_files();
        copy_paste_loop(&count_lines);
        close_files();
        printf("\nCopied lines: %d\n", count_lines);
        //test_enter_print();
    #endif

    return 0;
}
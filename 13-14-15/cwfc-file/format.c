#include "lib.h"

extern FILE* f;

void format_txt_lines(int *count_ch){
    if(*count_ch == STR_LEN - 1){
        fputc(ENTER, f);
        *count_ch = 0;
    }
}

void format_txt_dot(int *count_d, int * count_ch){
    if(*count_d == 5){
        fputc(ENTER, f);
        fputc(ENTER, f);
        fputc(TAB, f);

        *count_d = 0;
        *count_ch = 4;
    }
}

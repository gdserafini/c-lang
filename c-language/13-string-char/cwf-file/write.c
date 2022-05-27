#include "lib.h"

extern FILE* f;

void write_txt(){
    char char_write;
    int count_dot = 0, count_char = 4;

    fputc(TAB, f);

    do{
        /* COPY - EXCEPT ENTER */
        char_write = fgetc(stdin);
        if(char_write != ENTER){
            fputc(char_write, f);
        }

        count_char++;
        /* CHECK IF COUNT_CHAR == 100 -> FORMAT LINE */
        format_txt_lines(&count_char);

        if(char_write == DOT){
            count_dot++;
            /* CHECK IF COUNT_DOT == 5 -> FORMAT A PARAGRAPH */
            format_txt_dot(&count_dot, &count_char); 
        }

        verif_error_write();
    }while(!verif_end_write(char_write));
}

int verif_end_write(char char_end){
    if(char_end == ENTER){
        return 1;
    }
    else{
        return 0;
    }
}

void verif_error_write(){
    if(ferror(f)){
        perror("\nERROR - WRITE ");
        exit(0);
    }
}
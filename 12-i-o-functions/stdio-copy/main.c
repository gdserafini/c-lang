/* COPY .TXT TO ANOTHER */

#include "lib.h"

FILE* fc;
FILE* fp;

int main(void){
    int count_lines = 0;

    #if defined FILE1 && defined FILE2
        open_files();
        copy_paste_loop(&count_lines);
        close_files();
        print_end(count_lines);
    #endif

    return 0;
}

/* FUNCTION */

/* TEST -> READ A STRING */

void open_files(){
    fc = fopen(FILE1, "r");
    fp = fopen(FILE2, "w");

    verif_error_open();
}

/* VERIF ERROR -> OPEN FILES .TXT OR ERROR WITHIN THE FILES */
void verif_error_open(){
    if(fc == NULL){
        perror("\nERROR - FILE1: \n");
        exit(0);
    }
    else if(fp == NULL){
        perror("\nERROR - FILE2: \n");
        exit(0);
    }
}

/* GENERAL LOOP -> COPY-PASTE */
void copy_paste_loop(int *cl_loop){
    char line[STR_LEN];

    do{
        cp_string(line, cl_loop);
        verif_error_cp();
    }while(!feof(fc));
}

void cp_string(char *str_cp, int *count){
    fgets(str_cp, STR_LEN, fc);
    fputs(str_cp, fp);
    (*count)++;
}

void verif_error_cp(){
    if(ferror(fc) || ferror(fp)){
        perror("\nERROR - CP: \n");
        exit(0);
    }
}

void close_files(){
    fclose(fc);
    fclose(fp);
}

void print_end(int count){
    printf("\nCopied lines: %d\n", count);
    printf("\nFinalized: %s %s\n", __DATE__, __TIME__);
}
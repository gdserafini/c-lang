/* USING PREPROCESSOR, FUNCTIONS I/O */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* STR SIZE AND FILE DEFINED */
#define STR_LEN 256
#define FILE1 "file1.txt"
#define FILE2 "file2.txt"

FILE* fc;
FILE* fp;

void open_files(void);
void verif_error_open(void);
void copy_paste_loop(int *cl_loop);
void close_files(void);
void test_enter_print(void);

/* TEST -> READ A STRING */
void test_enter_print(){
    char string_test[STR_LEN];

    printf("\nEnter a string: ");
    fgets(string_test, STR_LEN, stdin);

    printf("\nString: %s\n", string_test);
}

void open_files(){
    fc = fopen(FILE1, "r");
    fp = fopen(FILE2, "w");

    verif_error_open();
}

/* VERIF ERROR -> OPEN FILES .TXT OR ERROR WITHIN THE FILES */
void verif_error_open(){
    if(fc == NULL){
        printf("\nOPEN ERROR - FILE1\n");
    }
    else if(fp == NULL){
        printf("\nOPEN ERROR - FILE2\n");
    }
    else{   
        if(ferror(fc)){
            printf("\nERROR - FILE1\n");
        }
        else if(ferror(fp)){
            printf("\nERROR - FILE2\n");
        }
    }
}

/* GENERAL LOOP -> COPY-PASTE */
void copy_paste_loop(int *cl_loop){
    char string[STR_LEN];

    do{
        fgets(string, STR_LEN, fc);
        fputs(string, fp);
        (*cl_loop)++;

        if(ferror(fc) || ferror(fp)){
            break;
        }
    }while(!feof(fc));
}

void close_files(){
    fclose(fc);
    fclose(fp);
    
    printf("\nFinalized: %s %s\n", __DATE__, __TIME__);
}
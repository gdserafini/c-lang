/* USING PREPROCESSOR, FUNCTIONS I/O */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* STR SIZE AND FILE DEFINED */
#define STR_LEN 256
#define FILE1 "file1.txt"
#define FILE2 "file2.txt"

void open_files(void);
void verif_error_open(void);
void copy_paste_loop(int *cl_loop);
void close_files(void);
void test_enter_print(void);
void cp_string(char *str_cp, int *count);
void verif_error_cp(void);
void print_end(int count);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 100
#define ENTER '\n'
#define TAB '\t'
#define DOT '.'
#define COPY "copy-"
#undef TEST

/* CREATE */
void enter_file_name(void);
int verif_name(int n);
void create_file(void);
void verif_error_create(void);
#ifdef TEST    
    void remove_scopy(void);
#endif

/* WRITE */
void write_txt(void);
int verif_end_write(char char_end);
void verif_error_write(void);

/* FORMAT */
void format_txt_lines(int *count_ch);
void format_txt_dot(int *count_d, int *count_ch);

/* COPY */
void secur_copy(void);
#ifdef TEST
    void rename_file(void);
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define STR_LEN 15
#define ALPHA 26
#define ENTER '\n'

struct students{
    int *notes;
    char **names;
};

typedef struct students STUD;

/* ENTER STUDENTS */
void enter_class_size(int *qnt_stud);
void enter_names(int qnt_stud, STUD* s);
void enter_notes(int qnt_stud, STUD* s);

/* ALLOC MEMORY */
void alloc_class_size(int qnt_stud, STUD* s);
void free_mem(int qnt_stud, STUD* s);

/* ORDER - SEARCH */
void order_stud(int qnt_stud, STUD* s);
void option_order(int select, int qnt_stud, STUD* s);
void order_name1(int qnt_stud, STUD* s);
void order_name2(int qnt_stud, STUD* s);
void order_note1(int qnt_stud, STUD* s);
void order_note2(int qnt_stud, STUD* s);
void order_or_search(int qnt_stud, STUD* s);
void print_select(int *select);
void print_answer(char *answer);
void options(int qnt_stud, int select, STUD* s);
void search_stud(int qnt_stud, STUD* s);
void enter_name(char *name_search);

/* OTHERS */
void put_stud_file(int qnt_stud);
void format_names(int qnt_stud);
int is_misc(char ch, int *position);
void print_students(int qnt_stud, STUD* s);
void swap_students(STUD* s, int i, int j);
void verif_letter(int i, int j, int k, STUD* s, int *num_char1, int *num_char2);
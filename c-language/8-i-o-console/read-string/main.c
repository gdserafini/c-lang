//READ (CONSOLE) -> PRINT (STRING)

#include <stdio.h>

#define STR_LEN 256

//**PROTOTYPE**
void enter_string(char *string_enter);
void print_string(char *string_print);

/* ALGORITM STRUCT */
int main(void){
    char string[STR_LEN];

    enter_string(string);
    print_string(string);

    return 0;
}

//**FUNCTIONS**
/* TESTING -> FGETS AND FPUTS (STDIN AND STDOUT) */
void enter_string(char *string_enter){
    printf("\nEnter a string: ");
    fgets(string_enter, STR_LEN, stdin);
}

void print_string(char *string_print){
    printf("\n\n");
    fputs(string_print, stdout);
    printf("\n\n");
}
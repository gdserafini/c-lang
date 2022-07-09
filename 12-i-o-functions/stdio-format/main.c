/* CREATE A .TXT FILE AND WRITE A FORMATTED TEXT */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 100
#define END_ENTER '\n'

void enter_file_name(char *name_enter);
void create_file(char *name_create);
void console_write_file();
int console_end_file(char char_end);
void format_text_file(int *count_format);
int is_txt(char *name_verif);

FILE* f;

/* BASIC ALGORITM */
int main(){
    char file_name[STR_LEN];

    enter_file_name(file_name);
    if(is_txt(file_name)){
        create_file(file_name);
        console_write_file();
        fclose(f);
    }
    else{
        printf("\nERROR - ENTER A .TXT FILE NAME\n");
        exit(0);
    }

    return 0;
}

/* FUCTIONS */

/* TYPE A FILE NAME AND CHECK IF IT IS A .TXT FILE */
void enter_file_name(char *name_enter){
    printf("\nEnter the file name: ");
    fgets(name_enter, STR_LEN, stdin);
}

/* CREATE A .TXT FILE */
void create_file(char *name_create){
    f = fopen(name_create, "w");

    if(f == NULL || ferror(f)){
        printf("\nFILE ERROR\n");
        exit(0);
    }
}

/* WRITE A FORMATTED TEXT - CHAR BY CHAR */
void console_write_file(){
    char char_write;
    int count_char = 0;

    do{
        char_write = fgetc(stdin);
        /* NOT PRINT \n */
        if(char_write != END_ENTER){
            fputc(char_write, f);
        }

        count_char++;

        format_text_file(&count_char);

        if(ferror(f)){
            printf("\nWRITE ERROR\n");
            exit(0);
        }
    }while(!console_end_file(char_write));

    fseek(f, 0, SEEK_END);
}

/* ENTER -> END */
int console_end_file(char char_end){
    if(char_end == END_ENTER){
        return 1;
    }
    else{
        return 0;
    }
}

/* \n IF N° CHAR = 100 */
void format_text_file(int *count_format){
    if(*count_format == STR_LEN -1){
        fputc(END_ENTER, f);
        *count_format = 0;
    }
}

/* != .TXT -> ERROR */
int is_txt(char *name_verif){
    for(int i = 0; i < strlen(name_verif) - 3; i++){
        if(name_verif[i] == '.' && 
        name_verif[i+1] == 't' &&
        name_verif[i+2] == 'x' &&
        name_verif[i+3] == 't'){
            return 1;
        }
    }

    return 0;
}
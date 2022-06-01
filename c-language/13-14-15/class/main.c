/* CLASS -> ALLOC -> ENTER -> ORDER - SEARCH -> PUT (FILE.TXT) */
#include "lib.h"

STUD s;
char letter[ALPHA] = "abcdefghijklmnopqrstuvwxyz";
char letter2[ALPHA] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
FILE* f;

int main(void){
    int qnt_stud;

    enter_class_size(&qnt_stud);
    alloc_class_size(qnt_stud, &s); //
    enter_names(qnt_stud, &s); //
    enter_notes(qnt_stud, &s); //
    order_or_search(qnt_stud, &s); //
    format_names(qnt_stud);
    put_stud_file(qnt_stud);
    free_mem(qnt_stud, &s); //

    return 0;
}

/* PUT - FILE */
void put_stud_file(int qnt_stud){
    format_names(qnt_stud);

    f = fopen("students.txt", "r+");

    if(f == NULL ){
        printf("\nERROR - FILE\n");
        fputs(__DATE__ __TIME__, stdout);
        exit(0);
    }
    else{
        fseek(f, 0, SEEK_SET);
        fputc(ENTER, f);

        for(int i = 0; i < qnt_stud - 1; i++){
            fprintf(f, "%s, %d", s.names[i], s.notes[i]);
        }
    }

    fclose(f);
}

/* FORMAT */
void format_names(int qnt_stud){
    char name_format[STR_LEN], ch;
    int position;

    for(int i = 0; i < qnt_stud - 1; i++){
        ch = s.names[i][0];

        if(is_misc(ch, &position)){
            s.names[i][0] = letter2[position];
        }
    }
}

int is_misc(char ch, int *position){
    for(int i = 0; i < ALPHA - 1; i++){
        if(ch == letter[i]){
            *position = i;
            return 1;
        }
    }

    return 0;
}
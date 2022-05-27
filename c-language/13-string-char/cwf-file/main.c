/* CREATE WRITE FORMAT COPY */

/* LIBS AND MAIN ALGORITM */
#include "lib.h"

FILE* f;
char file_name[STR_LEN];

void print_intro(void);
void print_end(void);

int main(void){
    print_intro();

    enter_file_name();
    
    if(verif_name(0)){
        create_file();
        write_txt();
        
        fclose(f);
    }

    secur_copy();

    print_end();

    return 0;
}

void print_intro(){
    printf("\n              **CWFC FILE**\n");
    printf("       Please, enter a file name with .txt.\n");
    printf("When typing the text press enter ONLY AT THE END of the text.\n");
}

void print_end(){
    printf("\nCWFC successful.\n");
    printf("End: %s %s\n\n", __DATE__, __TIME__);
}
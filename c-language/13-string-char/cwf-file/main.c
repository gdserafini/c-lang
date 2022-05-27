/* CREATE WRITE FORMAT COPY */

#include "lib.h"

FILE* f;
char file_name[STR_LEN];

/* LIBS AND MAIN ALGORITM */
int main(void){
    enter_file_name();
    if(verif_name(0)){
        create_file();
        write_txt();
        //open_create_new();
        fclose(f);
    }

    return 0;
}
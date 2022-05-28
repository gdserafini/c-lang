#include "lib.h"

extern FILE* f;
extern char file_name[STR_LEN];

#ifdef TEST
    void remove_scopy(){
        remove("scopy.txt");
        if(remove("scopy.txt")){
            printf("\nscopy.txt removed\n");
        }
    }
#endif

void enter_file_name(){
    printf("\nEnter the file name: ");
    fgets(file_name, STR_LEN, stdin);
}

/* CREATE FILE AND VERIF ERROR */
void create_file(){
    f = fopen(file_name, "w");

    verif_error_create();
}

void verif_error_create(){
    if(f == NULL){
        perror("\nERROR - OPEN FILE ");
        exit(0);
    }
}

/* CHECK IF IS A .TXT FILE */
int verif_name(int n){
    if(n > strlen(file_name)){
        printf("\nERROR - ENTER A .TXT FILE\n");
        exit(0);
    }
    else{
        if(file_name[n] == '.' && file_name[n+1] == 't' && 
        file_name[n+2] == 'x' && file_name[n+3] == 't'){
            return 1;
        }
        else{
            verif_name(n+1);        
        }
    }
}
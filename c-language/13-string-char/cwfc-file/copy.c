#include "lib.h"

extern char file_name[STR_LEN];
extern FILE* f;
FILE* fc;

void secur_copy(){
    f = fopen(file_name, "r");
    fc = fopen("scopy.txt", "w");

    char string[STR_LEN];

    fseek(f, 0, SEEK_SET);

    do{
        fgets(string, STR_LEN, f);
        fputs(string, fc);
    }while(!feof(f));

    fclose(f);
    fclose(fc);

    //rename_file(); -> TEST
}

#ifdef TEST
    void rename_file(){
        char new_name[STR_LEN] = "original-";

        strcat(new_name, file_name);

        rename(file_name, new_name);

        if(rename(file_name, new_name)){
            printf("\nfile renamed\n");
        }
    }
#endif
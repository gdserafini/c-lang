//working -> version main2

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(int argc, char **argv){
    #if WORKING == 1
        char **string, str_copy[CH_COL_MAX], letter1, letter2;
        int count_char = 0, count_lines = 0;

        FILE* fr;

        fr = fopen("main1.txt", "r+");

        if(fr == NULL){
            printf("\nData base error.\n");
            exit(0);
        }
        else{
            for(int i = 0; i < CH_COL_MAX + 1; i++){   
                fscanf(fr, "%c", &letter1);
                count_char++;
                    
                if(letter1 == '\n'){
                    count_char = 0;
                    i = 0;
                }
                
                if(count_char == 99){
                    fprintf(fr, "\n");
                    i = 0;
                }
            }

            fseek(fr, 0, SEEK_SET);

            for(int i = 0; i < CH_COL_MAX + 1; i++){ 
                fscanf(fr, "%c", &letter2);
                    
                if(letter2 == '\n'){
                    i = 0;
                    count_lines++;
                }
            }
        }

        fclose(fr);

        string = (char **)malloc(sizeof(char *) * count_lines);
        
        for(int i = 0; i < count_lines; i++){
            string[i] = (char *)malloc(sizeof(char) * CH_COL_MAX);
        }

        FILE* fc;

        fc = fopen("main1.txt", "r+");

        if(fc == NULL){
            printf("\nData base error.\n");
            exit(0);
        }
        else{
            fseek(fc, 0, SEEK_SET);

            for(int i = 0; i < count_lines; i++){
                fscanf(fc, "%[^\n]s", string[i]);
            }
        }

        fclose(fc);

        FILE* fp;

        fp = fopen("main2.txt", "r+");

        if(fp == NULL){
            printf("\nData base error.\n");
            exit(0);
        }
        else{
            fseek(fp, 0, SEEK_SET);

            for(int i = 0; i < count_lines; i++){
                fprintf(fp, "%s\n", string[i]);
            }   
        }

        fclose(fp);

        for(int i = 0; i < CH_COL_MAX; i++){
            free(string[i]);
        }

        free(string);
    #elif WORKING == 2
        /* VERSION MAIN2 */
        char line_string[SIZE];

        //checks if the filenames have been typed
        if(argc != 3){
            print_msg();
        }
        else{
        //open and copy-paste
        FILE* fc;
        FILE* fp;

        fc = fopen(argv[1], "r+");
        fp = fopen(argv[2], "w"); //w -> create a new empty file

        do{
            fgets(line_string, 100, fc);
            fputs(line_string, fp);
        }while(!feof(fc)); //checks if the file being copied has finished

        fclose(fp);
        fclose(fc);
    }
    #endif

    return 0;
}
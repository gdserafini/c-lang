//this algorithm doesn't work, the main2.c version is much better and is working, 
//but this one is worth the study and learning I had

#include <stdio.h>
#include <stdlib.h>

#define CH_COL_MAX 100

int main(void){
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

    return 0;
}
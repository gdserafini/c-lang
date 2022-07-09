/* ORDER FILE - QUICK-SORT */
/* EXEMPLE 10 NUMBERS .TXT*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_FILE 10
#define MAX 100

void verif_ferror(FILE *f);
void fprint_numbers(FILE *f);

int main(void){
    FILE *f;
    srand(time(0));

    /* MAIN ALGORITM */
    f = fopen("numbers.txt", "w+");
    verif_ferror(f);
    fprint_numbers(f);
    fclose(f);

    return 0;
}

/* EXIT 1 IF - ERROR */
void verif_ferror(FILE *f){
    if(ferror(f) || f == NULL){
        perror("\nError - ");
        exit(1);
    }
}

void fprint_numbers(FILE *f){
    int number;

    for(int i = 0; i < SIZE_FILE; i++){
        number = rand()%MAX;
        if(i < SIZE_FILE-1){
            fprintf(f, "%d\n", number);
        }
        else if(i == SIZE_FILE-1){
            fprintf(f, "%d", number);
        }
    }
}
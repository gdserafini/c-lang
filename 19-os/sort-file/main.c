/* ORDER FILE - QUICK-SORT */
/* EXEMPLE 10 NUMBERS .TXT*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_FILE 10
#define MAX 100

void verif_ferror(FILE *f);
void fprint_numbers(FILE *f);
void read_numbers(FILE *f, int *numbers);
void sort_file(int *numbers);
void swap_numbers(int *n1, int *n2);
void fprint_sort(FILE *f, int *numbers);

int main(void){
    int numbers_get[SIZE_FILE];
    FILE *f;

    srand(time(0));

    /* MAIN ALGORITM */
    f = fopen("numbers.txt", "w");
    verif_ferror(f);
    fprint_numbers(f);
    fclose(f);

    f = fopen("numbers.txt", "r+");
    read_numbers(f, numbers_get);
    sort_file(numbers_get);
    rewind(f);
    fprint_sort(f, numbers_get);
    fclose(f);

    return 0;
}

/* EXIT 1 IF - ERROR */
void verif_ferror(FILE *f){
    if(ferror(f)){
        perror("\nError - ");
        printf("\n");
        exit(1);
    }
    else if(f == NULL){
        printf("\nError - empty file.\n");
        exit(1);
    }
}

void fprint_numbers(FILE *f){
    int number;

    for(int i = 0; i < SIZE_FILE; i++){
        number = rand() % MAX;

        if(i < SIZE_FILE-1){
            fprintf(f, "%d\n", number);
        }
        else if(i == SIZE_FILE-1){
            fprintf(f, "%d", number);
        }

        number = 0;
    }
}

void read_numbers(FILE *f, int *numbers){
    for(int i = 0; i < SIZE_FILE; i++){
        fscanf(f, "%d", &numbers[i]);
    }
}

void sort_file(int *numbers){
    for(int i = 0; i < SIZE_FILE-1; i++){
        for(int j = i+1; j < SIZE_FILE; j++){
            if(numbers[i] > numbers[j]){
                swap_numbers(&numbers[i], &numbers[j]);
            }
        }
    }
}

void swap_numbers(int *n1, int *n2){
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void fprint_sort(FILE *f, int *numbers){
    for(int i = 0; i < SIZE_FILE; i++){
        if(i < SIZE_FILE-1){
            fprintf(f, "%d\n", numbers[i]);
        }
        else if(i == SIZE_FILE-1){
            fprintf(f, "%d", numbers[i]);
        }
    }
}
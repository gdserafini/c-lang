/* FUNCTIONS -> MEMORY ALLOCATION (TESTS) */

#include <stdio.h>
#include <stdlib.h> /* STD ALLOC */
#include <string.h>

#define SIZE 10

struct student{
    char name[15];
    int note;
};

void test1(void);
void test2(void);
void test3(void);
void test4(void);

int main(void){
    //test1();
    //test2();
    //test3();
    test4();

    return 0;
}

void test1(){
    int *num;

    /* CALLOC -> ZERO MEM */
    num = calloc(SIZE, sizeof(int));

    if(num == NULL){
        exit(1);
    }

    for(int i = 0; i < SIZE; i++){
        num[i] = i + 1;
        printf("%d ", num[i]);
    }

    free(num);
}

void test2(){
    char *name_test[SIZE]; /* ALLOC MATRIX -> SIZE LINES */

    /* ALLOC 15 POSITION BY LINE */
    for(int i = 0; i < SIZE; i++){
        name_test[i] = (char *)malloc(sizeof(char) * 15);
    }

    if(name_test == NULL){
        exit(1);
    }

    for(int i = 0; i < SIZE; i++){
        printf("\nEnter a name: ");
        scanf(" %s", name_test[i]);
    }

    for(int i = 0; i < SIZE; i++){
        printf("\n%s", name_test[i]);
    }

    for(int i = 0; i < SIZE; i++){
        free(name_test[i]);
    }
}

void test3(){
    /* STRUCT POINTER */
    struct student *s;

    /* ALLOC -> SIZE STRUCTS S */
    s = malloc(sizeof(struct student) * SIZE);

    if(s == NULL){
        exit(1);
    }
    else{
        for(int i = 0; i < SIZE; i++){
            /* ENTER INFOS -> STRUCT BY STRUCT */
            printf("\nEnter a name: ");
            scanf(" %s", s[i].name);

            printf("\nEnter a %s's note: ", s[i].name);
            scanf(" %d", &s[i].note);
        }

        for(int i = 0; i < SIZE; i++){
            printf("\nName: %s\nNote: %d\n", s[i].name, s[i].note);
        }
    }

    free(s);
}

void test4(){
    char *string;

    /* CHAR NUM + 1 */
    string = malloc(sizeof(char) * 15);

    if(!string){
        exit(1);
    }

    strcpy(string, "This is a test");
    printf("\n%s\n", string);

    /* REALLOC */
    string = realloc(string, 16);

    if(!string){
        exit(1);
    }

    strcat(string, "!");
    printf("\n%s\n", string);

    free(string);
}
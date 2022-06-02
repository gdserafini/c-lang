#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <setjmp.h>

#define ABS(x) x < 0 ? -(x) : x
jmp_buf ebuf;

void exemple1(void);
void exemple2(void);
void exemple3(void);
void exemple4(void);
void exemple5(void);
void exemple6(void);
void exemple7(void);
void exemple8(void);

int main(void){
    //exemple1();
    //exemple2();
    //exemple3();
    //exemple4();
    //exemple5();
    //exemple6();
    //exemple7();
    exemple8();

    return 0;
}

void exemple1(){
    int num = 1;

    if(num != 0){
        abort();
    }
}

void exemple2(){
    int num = -1;

    printf("\n%d\n", ABS(num));
}

void exemple3(){
    int num = 129;

    assert(!(num & 128));
}

void exemple4(){
    atexit(exemple2);
}

void exemple5(){
    char num[2] = "20";

    printf("\n%d\n", atoi(num));
}

void exemple6(){
    div_t n = div(57, 8);   /* STRUCT */
    
    printf("\n%d %d\n", n.quot, n.rem);
}

void exemple7(){
    char *p;   /* USE IN CLASS */
    p = "test";
    printf("%s", p);
}

void exemple8(){
    int num, num2 = 1;

    /* BACK */
    num = setjmp(ebuf);

    /* PRINT - "LOOP" */
    if(num2 != 1){
        printf("\n%d\n", num);
    }
    else{
        printf("\n%d\n", num2);
        num2++;
        longjmp(ebuf, num2);
    }
}
/* DIRECTIVES AND PREPROCESSOR */

#include <stdio.h>

/* DEFINES AND PROTORYPE */
#define NUM 10
#define NINE 9
#define TEN NINE+1
#define TRUE 1
#define FALSE 0
#define MSG_ERROR "\nERROR\n"
#define MSG_OK "\nIT'S OK\n"

void print_msg(int check_print);

int main(void){
    int check;

    /* DIRECT USING DEFINES */
    #if NUM == TEN 
        check = TRUE; 
        print_msg(check);
    #else
        check = FALSE;
        print_msg(check);
    #endif

    return 0;
}

/* PRINT 1 OF 2 #DEFINE MSG */
void print_msg(int check_print){
    if(check_print == 1){
        printf("%d", check_print);
        printf(MSG_OK);
    }
    else if(check_print == 0){
        printf("%d", check_print);
        printf(MSG_ERROR);
    }
}
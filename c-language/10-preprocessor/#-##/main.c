/* # ## OPERATORS */

#include <stdio.h>

/* # STRING ## CONCAT */
#define print_str(str) # str
#define concat_str(str1, str2) str1 ## str2
#define concat_num(num1, num2) num1 ## num2

void print_string(void);
void concat_string(void);
void concat_number(void);

int main(void){
    print_string();
    concat_string();
    concat_number();

    return 0;
}

void print_string(){
    printf("\n");
    printf(print_str(Hello world!));
    printf("\n");
}

/* STR[] = HELLOE WORLD! AND PRINT */
void concat_string(){
    char s1s2[12] = "Hello world!";
    
    printf(concat_str(s1, s2));
    printf("\n");
}

void concat_number(){
    int n1n2 = 10;

    printf("%d", concat_num(n1, n2));
    printf("\n");
}
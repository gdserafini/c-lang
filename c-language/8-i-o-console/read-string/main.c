//algoritm -> enter char by char = string

#include <stdio.h>

//**PROTOTYPE**
void enter_print_strings(void);
void read_string_char(void);
int getc(FILE *stream);

int main(void){
    enter_print_strings();
    read_string_char();

    return 0;
}

//**FUNCTIONS**

//**read string -> print
void enter_print_strings(){
    char string1[10], string2[10];

    gets(string1);
    printf("%s", string1);

    scanf("%s", string2);
    printf("%s", string2);
}

//**??enter char by char -> put on the string??
void read_string_char(){
    char string3[10];

    for(int i = 0; i < 10; i++){
        string3[i] = getc(stdin);
    }

    printf("%s", string3);
}
//algoritm -> enter char by char = string

#include <stdio.h>
#include <stdlib.h>

//**PROTOTYPE**
void enter_print_strings(void);
void read_string_char(void);

int main(void){
    int option;

    printf("\n1 - string, 2 - char: ");
    scanf("%d", &option);

    switch(option){
        case 1:
            enter_print_strings();
            break;
        case 2:
            read_string_char();
            break;
        default:
            printf("\nERROR\n");
            exit(0);
    }

    return 0;
}

//**FUNCTIONS**

//**read string -> print
void enter_print_strings(){
    char string[10];

    scanf("%s", string);
    printf("\n%s\n", string);
}

//**??enter char by char -> put on the string??
void read_string_char(){
    char string2[10];

    for(int i = 0; i < 10; i++){
        scanf("%c\n", &string2[i]);
    }

    printf("%s\n", string2);
}
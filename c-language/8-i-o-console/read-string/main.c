#include <stdio.h>

int main(){
    char string1[10], string2[10], ch;

    gets(string1);
    printf("%s", string1);

    scanf("%s", string2);
    printf("%s", string2);

    ch = getchar();
    printf("%c", ch);

    return 0;
}
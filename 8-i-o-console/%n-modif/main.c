#include <stdio.h>

int main(void){
    int count;
    float number = 100.123456;
    int number2 = 2;

    printf("\nThis is a test!%n\n" , &count);
    printf("%d", count);
    printf("\nThis is a%n\n" , &count);
    printf("%d", count);
    printf("\nThis is%n\n" , &count);
    printf("%d", count);
    printf("\nThis%n\n" , &count);
    printf("%d\n", count);

    printf("\n%f\n", number);
    printf("\n%.2f\n", number);
    printf("\n%2.2f\n", number);
    printf("\n%5f\n", number);
    printf("\n%010f\n", number);

    return 0;
}
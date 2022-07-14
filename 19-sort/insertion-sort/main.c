#include <stdio.h>

void print_numbers(int *numbers);
void insertion_sort(int *numbers);
void swap_num(int *num1, int *num2, int smaller);

int main(void){
    int numbers[10] = {100,6,2,33,19,20,23,25,30,40};
    
    print_numbers(numbers);
    insertion_sort(numbers);
    print_numbers(numbers);

    return 0;
}

void print_numbers(int *numbers){
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

void swap_num(int *num1, int *num2, int smaller){
    *num1 = *num2;
    *num2 = smaller;
}

void insertion_sort(int *numbers){
    int smaller;

    for(int i = 1; i < 10; i++){
        smaller = numbers[i];

        int j = i - 1;

        while(smaller < numbers[j] && j >= 0){
            swap_num(&numbers[j+1], &numbers[j], smaller);
            j--;
        }
    }
}
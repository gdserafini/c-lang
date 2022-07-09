#include <stdio.h>

void print_numbers(int *numbers);
void selection_sort(int *numbers);
void swap_num(int *num1, int *num2, int smaller);

int main(void){
    int numbers[10] = {100,6,2,33,19,20,23,25,30,40};
    
    print_numbers(numbers);
    selection_sort(numbers);
    print_numbers(numbers);

    return 0;
}

void selection_sort(int *numbers){
    int smaller, aux, ex, p;

    for(int i = 0; i < 10-1; i++){
        ex = 0;
        p = i;
        smaller = numbers[i];

        for(int j = i+1; j < 10; j++){
            if(numbers[j] < smaller){
                p = j;
                smaller = numbers[j];
                ex = 1;
            }
        }

        if(ex){
            swap_num(&numbers[p], &numbers[i], smaller);
        }
    }
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
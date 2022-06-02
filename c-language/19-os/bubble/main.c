#include <stdio.h>
#include <time.h>

void order_bubble1(int *num, int size);
void order_bubble2(int *num, int size);
void print_numbers(int *num);
void print_time(void);

int main(void){
    double time = 0.0;
    clock_t begin = clock();  //TIME -> BEGIN

    /* ALGORITM */
    int numbers[10] = {8,1,15,77,54,100,2,44,4,48};
    order_bubble1(numbers, 10);
    //order_bubble2(numbers, 10);
    print_numbers(numbers);
    
    clock_t end = clock(); //TIME -> FINISHED
    time = (double)(end - begin)/CLOCKS_PER_SEC;
    printf("\nElapsed time: %f seconds.\n", time);

    return 0;
}

void order_bubble1(int *num, int size){
    int aux;

    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(num[i] > num[j]){
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;;
            }
        }
    }
}

void order_bubble2(int *num, int size){
    int aux, sw;

    do{
        sw = 0; //BEGIN -> NO OPERATION

        for(int i = 0; i < size - 2; i++){
            if(num[i] > num[i+1]){
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;

                sw = 1; //OPERT.
            }
        }

        for(int i = size - 2; i > 0; i--){
            if(num[i] > num[i+1]){
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;

                sw = 1;
            }
        }
    }while(sw);  //WHILE THERE ARE OPERATION TO DO
}

void print_numbers(int *num){
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", num[i]);
    }

    printf("\n");
}
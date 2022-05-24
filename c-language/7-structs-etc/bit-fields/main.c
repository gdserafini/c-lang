#include <stdio.h>
#include <stdlib.h>
#include "main.h"

PAR p;

void zero_parameters(){
    p.engine_on = 0;
    p.eletric_on = 0;
    p.move = 0;
}

void general_loop(){
    int action;

    do{
        if(!p.engine_on && !p.eletric_on){
            printf("\n1 to start the engine, 2 to start the eletronic: ");
            scanf("%d", &action);
            if(action == 1){
                p.engine_on = 1;
            }
            else if(action == 2){
                p.eletric_on = 1;
            }
        }
        else if(p.engine_on && !p.eletric_on){
            printf("\n2 to start the eletronic: ");
            scanf("%d", &action);
            if(action == 2){
                p.eletric_on = 1;
            }
            else{
                exit(0);
            }
        }
        else if(!p.engine_on && p.eletric_on){
            printf("\n1 to start the eletronic: ");
            scanf("%d", &action);
            if(action == 1){
                p.engine_on = 1;
            }
            else{
                exit(0);
            }
        }
        else if(p.engine_on && p.eletric_on){
            printf("\n3 to move: ");
            scanf("%d", &action);
            if(action == 3){
                p.move = 1;
                printf("\nYou're moving!\n");
                printf("Engine: %u\nEletronic: %u\n", p.engine_on, p.eletric_on);
            }
            else{
                exit(0);
            }
        }
    }while(!p.move);
}

int main(void){
    zero_parameters();
    general_loop();

    return 0;
}
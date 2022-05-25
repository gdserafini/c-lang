#include <stdio.h>
#include <stdlib.h>
#include "main.h"

PAR p;

void zero_parameters(){
    p.engine_on = 0;
    p.eletric_on = 0;
    p.move = 0;
}

void enter_action(int *act_enter, int msg){
    if(msg == 1){
        printf("\n1 to start the engine, 2 to start the eletronic: ");
        scanf("%d", act_enter);
    }
    else if(msg == 2){
        printf("\n2 to start the eletronic: ");
        scanf("%d", act_enter);
    }
    else if(msg == 3){
        printf("\n1 to start the eletronic: ");
        scanf("%d", act_enter);
    }
    else if(msg == 4){
        printf("\n3 to move: ");
        scanf("%d", act_enter);
    }
}

void atrib_param(int *act_atrib, int step){
    if(step == 1){
        if(*act_atrib == 1){
            p.engine_on = 1;
        }
        else if(*act_atrib == 2){
            p.eletric_on = 1;
        }
    }
    else if(step == 2){
        if(*act_atrib == 2){
            p.eletric_on = 1;
        }
        else{
            exit(0);
        }
    }
    else if(step == 3){
        if(*act_atrib == 1){
            p.engine_on = 1;
        }
        else{
            exit(0);
        }
    }
    else if(step == 4){
        if(*act_atrib == 3){
            p.move = 1;
            printf("\nYou're moving!\n");
            printf("Engine: %u\nEletronic: %u\n", p.engine_on, p.eletric_on);
        }
        else{
            exit(0);
        }
    }
}

void verif_on(int * act_verif){
    if(!p.engine_on && !p.eletric_on){
        enter_action(act_verif, 1);
        atrib_param(act_verif, 1);
    }
    else if(p.engine_on && !p.eletric_on){
        enter_action(act_verif, 2);
        atrib_param(act_verif, 2);
    }
    else if(!p.engine_on && p.eletric_on){
        enter_action(act_verif, 3);
        atrib_param(act_verif, 3);
    }
    else if(p.engine_on && p.eletric_on){
        enter_action(act_verif, 4);
        atrib_param(act_verif, 4);
    }
}

void general_loop(){
    int action;

    do{
        verif_on(&action);
    }while(!p.move);
}

int main(void){
    zero_parameters();
    general_loop();

    return 0;
}
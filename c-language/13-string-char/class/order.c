#include "lib.h"

extern char letter[STR_LEN];

void order_stud(int qnt_stud, STUD* s){
    int select;

    fputs("\nOrder:\n", stdout);
    fputs("1 - [A-Z], ", stdout);
    fputs("2 - [Z-A], ", stdout);
    fputs("3 - [- +], ", stdout);
    fputs("4 - [+ -]: ", stdout);
    scanf("%d", &select);

    option_order(select, qnt_stud, s);
}

void option_order(int select, int qnt_stud, STUD* s){
     switch(select){
         case 1:
            order_name1(qnt_stud, s);
            break;
         case 2:
            order_name2(qnt_stud, s);
            break;
         case 3:
            order_note1(qnt_stud, s);
            break;
         case 4:
            order_note2(qnt_stud, s);
            break;
         default:
            fputs("\nERRO - SEARCH\n", stdout);
            fputs(__DATE__ __TIME__, stdout);
            exit(0);
     }
}

void order_name1(int qnt_stud, STUD* s){
    int num_char1, num_char2;

    for(int i = 0; i < qnt_stud - 1; i++){
        for(int j = 0; i < qnt_stud - 1; j++){
            for(int k = 0; k < ALPHA - 1; k++){
                if(s->names[i][0] == letter[k]){
                    num_char1 = k;
                }
                else if(s->names[j][0] == letter[k]){
                    num_char2 = k;
                }
            }

            if(num_char1 > num_char2){
                int aux_note;

                aux_note = s->notes[i];
                char aux_name[STR_LEN] = s->names[i];

                s->names[i] = s->names[j];
                s->notes[i] = s->notes[j];

                s->names[j] = aux_name;
                s->notes[j] = aux_note;
            }
        }
    }
}

void order_name2(int qnt_stud, STUD* s){
    int num_char1, num_char2;

    for(int i = 0; i < qnt_stud - 1; i++){
        for(int j = 0; i < qnt_stud - 1; j++){
            for(int k = 0; k < ALPHA - 1; k++){
                if(s->names[i][0] == letter[k]){
                    num_char1 = k;
                }
                else if(s->names[j][0] == letter[k]){
                    num_char2 = k;
                }
            }

            if(num_char1 < num_char2){
                int aux_note;

                aux_note = s->notes[i];
                char aux_name[STR_LEN] = s->names[i];

                s->names[i] = s->names[j];
                s->notes[i] = s->notes[j];

                s->names[j] = aux_name;
                s->notes[j] = aux_note;
            }
        }
    }
}

void order_note1(int qnt_stud, STUD* s){
    for(int i = 0; i < qnt_stud - 2; i++){
        for(int j = 1; i < qnt_stud - 1; j++){
            if(s->notes[i] > s->notes[j]){
                int aux_note;

                aux_note = s->notes[i];
                char aux_name[STR_LEN] = s->names[i];

                s->names[i] = s->names[j];
                s->notes[i] = s->notes[j];

                s->names[j] = aux_name;
                s->notes[j] = aux_note;
            }
        }
    }
}

void order_note2(int qnt_stud, STUD* s){
    for(int i = 0; i < qnt_stud - 2; i++){
        for(int j = 1; i < qnt_stud - 1; j++){
            if(s->notes[i] < s->notes[j]){
                int aux_note;

                aux_note = s->notes[i];
                char aux_name[STR_LEN] = s->names[i];

                s->names[i] = s->names[j];
                s->notes[i] = s->notes[j];

                s->names[j] = aux_name;
                s->notes[j] = aux_note;
            }
        }
    }
}
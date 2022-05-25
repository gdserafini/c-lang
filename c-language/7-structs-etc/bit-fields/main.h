#define PRMTRS 3

struct parameters{
    unsigned engine_on: 1;
    unsigned eletric_on: 1;
    unsigned move: 1;
};

typedef struct parameters PAR;

void zero_parameters(void);
void verif_on(int * act_verif);
void general_loop(void);
void enter_action(int *act_enter, int msg);
void atrib_param(int *act_atrib, int step);
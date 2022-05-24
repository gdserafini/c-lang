#define PRMTRS 3

struct parameters{
    unsigned engine_on: 1;
    unsigned eletric_on: 1;
    unsigned move: 1;
};

typedef struct parameters PAR;
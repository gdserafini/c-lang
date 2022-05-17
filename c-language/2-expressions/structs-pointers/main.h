#define LEN 10

struct num{
    int number1[LEN], number2[LEN];
};

typedef struct num NUM;

void cont(NUM* n);
void sum_n(int* s, NUM* n);
void print(int* s, NUM* n);
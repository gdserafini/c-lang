#define LEN 10 //arrays length

struct numbers{
    int number1[LEN], number2[LEN];
};

typedef struct numbers NUM;

void values(NUM* n);
void sum_arrays(NUM n);
void print(int s, NUM n);
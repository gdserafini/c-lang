struct numbers{
    int num1, num2, result;
};

typedef struct numbers NUM;

int calc_is_possible();
int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int exponentiation(int x, int y);
int functions(int (*pf)(int, int), int x, int y);
void enter_numbers();
void enter_option(int* op);
void switch_func(int op);
#define LEN 10
#define MAX 100

struct numbers{
    int num1[LEN], num2[LEN];
};

typedef struct numbers NUM;

void generatte();
int commons_arrays();
void compare();
int has_zero();
void print();
int all_the_same();
#define LEN 10
#define MAX 100

struct numbers{
    int num1[LEN], num2[LEN];
};

typedef struct numbers NUM;

void generatte();
int compare2();
void compare();
int has_zero();
void print();
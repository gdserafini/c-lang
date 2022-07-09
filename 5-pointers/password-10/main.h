#define SIZE 10
#define ALPHA 24

struct pass{
    int number[SIZE][SIZE];
    char strings[SIZE][SIZE];
};

typedef struct pass PASS;

void general(PASS* p);
void generate_password(PASS* p);
void print_password(PASS p);
void generate_numbers(PASS* p);
void generate_strings(PASS* p);
int has_error(PASS p);
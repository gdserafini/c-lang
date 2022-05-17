#define CLAS 1
#define STUD 30
#define LEN 15

struct notes{
    char names[STUD][LEN];
    int notes[STUD];
};

typedef struct notes NOTES;

void enter_names();
void enter_notes();
void find();
void search(char name_s[LEN]);
void print(int p, char name_p[LEN]);
void check_notes(int* sum_n, NOTES* n);
void check_names(int* sum2_c, NOTES* n);
int check(NOTES* n);
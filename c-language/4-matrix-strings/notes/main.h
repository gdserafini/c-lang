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
int check_notes(NOTES n);
int check_names(NOTES n);
int check(NOTES n);
void loop_find();
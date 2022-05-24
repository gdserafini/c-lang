#define SIZE 3
#define LEN 30

struct person{
    char name[LEN];
    int age;
    char gender;
    char street[LEN];
    int zip;
};

typedef struct person PERSON;

void print_intro(void);
void enter_answer(char *ans_enter);
int want_find(void);
void enter_name(int i);
void enter_age(int i);
void enter_gender(int i);
void enter_street(int i);
void enter_zip(int i);
void enter_infos(void);
void enter_find(char *name_find);
void print_infos(int i);
void search(char *name_search);
void find(void);
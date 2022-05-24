#define SIZE 3
#define LEN 20

struct students{
    char name[LEN];
    int note;
};

typedef struct students STUD;

int no_students(void);
void enter_name(int ind_e_name);
void enter_note(int ind_e_note);
void enter_infos(void);
void print_name(int ind_p_name);
void print_note(int ind_p_note);
void print_students(void);
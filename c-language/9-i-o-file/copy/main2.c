//**COPY FROM ARGV[1] TO ARGV[2] (both .txt)

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void print_msg(void);

//**ALGORITM
int main(int argc, char *argv[]){
    char line_string[SIZE];

    //checks if the filenames have been typed
    if(argc != 3){
        print_msg();
    }
    else{
        //open and copy-paste
        FILE* fc;
        FILE* fp;

        fc = fopen(argv[1], "r+");
        fp = fopen(argv[2], "w"); //w -> create a new empty file

        do{
            fgets(line_string, 100, fc);
            fputs(line_string, fp);
        }while(!feof(fc)); //checks if the file being copied has finished

        fclose(fp);
        fclose(fc);
    }

    return 0;
}

void print_msg(){
    printf("\nYou forgot the files name:");
    printf("\n./file.out file1 file2\n\n");
    exit(0);
}
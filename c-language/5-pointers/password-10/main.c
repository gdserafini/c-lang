#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

PASS p;

int main(){
    srand(time(0));
    general(&p);  //struct pointer -> all functions
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

PASS p;

int main(){   //10number(10 digits) and 10strings(10 chars)
    srand(time(0));
    general(&p);  //struct pointer -> all functions
    return 0;
}
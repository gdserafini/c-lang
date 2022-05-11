//poiters operators (&, *)

#include <stdio.h>

int main(){
    int n, m;
    int* p;

    n = 10;
    p = &n;
    m = *p;

    printf("\n%d\n", m);

    return 0;
}
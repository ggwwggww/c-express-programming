#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char buffer[1000];
    char* p;
    int* pi;
    float* pf;

    p = buffer;
    *p = 'a';
    pi = p + 1;
    *pi = 100;
    pf = p + 5;
    *pf = 3.14;

    printf("    ", *p);
    printf("%d      ", *pi);
    printf("%.2f      \n", *pf);

    return 0;
}
//math.c
#include <stdio.h>

double pi = 3.14;

void print_pi() {
    extern double pi;
    printf("The value of pi is: %f\n", pi);
}

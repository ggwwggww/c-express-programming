#include <stdio.h>
#include <math.h>

double sin_degree( double n ) {
    double radian = M_PI * n / 180.0;

    return printf("sin(%lf)의 값은 %lf\n", n, sin(radian));
}

int main(void) {
    for ( double i = 0.000000; i <= 180; i += 10 ) {
        sin_degree(i);
    }

    return 0;
}
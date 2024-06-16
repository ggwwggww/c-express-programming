#include <stdio.h>

int aaa(double n) {
    if ( n > 1 ) {
        return 1.0/n + aaa(n-1);
    }

    return n;
}

int main(void) {
    double n;
    scanf("%lf", &n);

    printf("%lf", aaa(n));

    return 0;
}
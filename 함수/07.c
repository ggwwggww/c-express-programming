#include <stdio.h>

int rround(double f) {
    return (f + 0.5);
}

int main(void) {
    double n;
    printf("실수를 입력하시오: ");
    scanf("%lf", &n);

    printf("반올림한 값은 %d입니다.", rround(n));

    return 0;
}
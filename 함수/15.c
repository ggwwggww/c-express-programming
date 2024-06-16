#include <stdio.h>

int factorial(double n) {
    double sum = 1;

    for ( double i = 1; i < n; i++ ) {
        sum *= i;
    }

    return sum;
}

int main(void) {
    double n;
    double e = 0;

    printf("어디까지 계산할까요: ");
    scanf("%lf", &n);

    for (double i = 1; i <= n; i++) {
        e += factorial(i);
    }

    printf("오일러의 수는 %lf입니다.", e);

    return 0;
}
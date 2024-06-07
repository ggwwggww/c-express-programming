#include <stdio.h>

int main(void) {
    double n, a, sum =1;

    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &n);

    printf("거듭 제곱 횟수를 입력하시오: ");
    scanf("%lf", &a);

    for (int i = 0; i < a; i++ ) {
        sum *= n;
    }

    printf("결과값은 %lf", sum);

    return 0;
}
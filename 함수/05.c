#include <stdio.h>

double cal_area(double radius) {
    return 3.14 * radius * radius;
}

int main(void) {
    double n;
    printf("원의 반지름을 입력하시오: ");
    scanf("%lf", &n);

    printf("원의 면적은 %.2lf입니다.", cal_area(n));

    return 0;
}
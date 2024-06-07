#include <stdio.h>

int main(void) {
    double a, b;

    printf("체중과 키를 입력하시오: ");
    scanf("%lf %lf", &a, &b);

    double k;

    k = ( a - 100 ) * 0.9;

    if ( b > k ) {
        printf("과체중입니다.");
    }

    else if ( b == k ) {
        printf("표준체중입니다.");
    }

    else {
        printf("저체중입니다.");
    }

    return 0;

}
#include <stdio.h>

double get_bigger(double n, double m) {
    if ( n > m ) {
        return printf("큰 수는 %.1lf입니다.", n);
    }

    else {
        return printf("큰 수는 %.1lf입니다.", m);
    }
}

int main(void) {
    double n , m;

    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &n, &m);

    get_bigger(n, m);

    return 0;
}
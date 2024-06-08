#include <stdio.h>

int nn(int n, int m) {
    if ( n % m == 0 ) {
        return printf("%d은 %d의 배수입니다.", n, m);
    }

    return printf("%d은 %d의 배수가 아닙니다.", n, m);
}

int main(void) {
    int n, m;
    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &n);

    printf("두 번째 정수를 입력하시오: ");
    scanf("%d", &m);

    nn(n, m);

    return 0;
}
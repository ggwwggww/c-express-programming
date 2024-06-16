#include <stdio.h>

int get_first_digit(int n) {
    while ( n > 0 ) {
        n /= 10;
    }

    return n;
}

int main(void) {
    int n;

    scanf("%d", &n);
    printf("정수를 입력하시오: %d", n);

    printf("가장 상위 자리수느 %d입니다.", get_first_digit(n));

    return 0;
}
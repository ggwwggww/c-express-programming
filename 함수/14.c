#include <stdio.h>

int is_prime(int n) {
    if ( n < 2 ) {
        return 0;
    }

    if ( n == 2 ) {
        return 1;
    }

    for (int i = 2; i < n; i++ ) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int n;

    printf("양의 정수를 입력하시오: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        if (is_prime(i) == 1 && is_prime(n - i) == 1) {
            printf("%d = %d + %d\n", n, i, n - i);
        }
    }

return 0;
}
#include <stdio.h>

int main(void) {
    int n, r, sum = 1;
    printf("n의 값: ");
    scanf("%d", &n);
    printf("r의 값: ");
    scanf("%d", &r);

    for ( int i = n; i >= n - r + 1; i-- ) {
        sum *= i;
    }

    printf("순열의 값은 %d입니다.", sum);

    return 0;
}
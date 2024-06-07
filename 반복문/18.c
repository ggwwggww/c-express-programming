#include <stdio.h>

int main(void) {
    double n, sum = 0;
    printf("항의 개수: ");
    scanf("%lf", n);

    for ( int i = 1; i <= n; i++ ) {
        sum += 1.0/i;
    }

    printf("수열의 합=%lf", sum);

    return 0;
}
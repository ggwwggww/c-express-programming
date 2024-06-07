#include <stdio.h>

int main(void) {
    int n, sum = 0;

    for ( int i = 0; i < 3; i++ ) {
        printf("숫자를 입력하시오: ");
        scanf("%d", &n);

        if ( n < 0 ) {
            i--;
            continue;
        }

        sum += n;
    }

    printf("\n합계는 %d입니다.", sum);

    return 0;
}
#include <stdio.h>

int main(void) {
    int n;
    printf("몇번쨰 항까지 구할까요? ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++ ) {
        if ( i == 1 ) {
            printf("0, ");
        }

        if ( i == 2 ) {
            printf("1, ");
        }

        else {
            c = a + b;
            a = b;
            b = c;

            printf("%d, ", c);
        }
    }

    return 0;
}
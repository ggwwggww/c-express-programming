#include <stdio.h>

int main(void) {
    int n;

    while (1) {
        printf("막대의 높이(종료 -1): ");
        scanf("%d", &n);

        if ( n < 0 ) {
            break;
        }

        for ( int i = 0; i < n; i++ ) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(void) {
    for ( int i = 1; i <= 7; i++ ) {
        for ( int j = 1; j <= ( 7 - i); j++ ) {
            printf(" ");
        }

        for ( int k = 1; k <= i; k++ ) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
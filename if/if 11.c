#include <stdio.h>

int main(void) {
    char c;
    c = getchar();

    if ( c == 'R' || c == 'r' ) {
        printf("Rectangle");
    }

    else if ( c == 'T' || c == 't' ) {
        printf("Triangle");
    }

    else if ( c == 'C' || c == 'c' ) {
        printf("Circle");
    }

    else {
        printf("Unknown");
    }

    return 0;
}
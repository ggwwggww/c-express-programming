#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomint() {
    return (rand()%81) + 10;
}

int main(void) {
    srand((unsigned int)time(NULL));

    int n;

    for ( int i = 0; i < 10; i++ ) {
        n = randomint();
        printf("%d ", n);
    }

    return 0;
}
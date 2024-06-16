#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    int arr[10];
    int high = -10000000, low = 10000000000;
    for (int i = 0; i < 10; i++) {
        arr[i] = rand();
        if ( arr[i] > high) {
            high = arr[i];
        }

        if ( arr[i] < low) {
            low = arr[i];
        }
    }

    printf("최댓값은 %d\n 최소값은 %d\n", high, low);

    return 0;
}
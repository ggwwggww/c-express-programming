#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int arr[5][3];
    int high = -100000000;
    int low = 10000000;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = rand()%101;
        }
    }

    for (int i = 0; i < 3; i++) {
        high = -100000000;
        low = 10000000;
        for (int j = 0; j < 5; j++) {
            if ( arr[j][i] > high) {
                high = arr[j][i];
            }

            if ( arr[j][i] < low) {
                low = arr[j][i];
            }
        }
        printf("시험 #%d의 최대점수=%d\n", i, high);
        printf("시험 #%d의 최소점수=%d\n", i, low);
    } 

    return 0;
}
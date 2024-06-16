#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int arr[6][6] = {0};
    int sum = -1;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            arr[i][j] = rand()%6;
        }
    }    

    for ( int i = 0; i <= 3; i++) {
        for ( int j = 0; j <= 3; j++) {
            int sum2 = 0;

            for ( int k = 0; k < 3; k++) {
                for ( int t = 0; t < 3; t++) {
                    sum2 += arr[i+k][j+t];
                }
            }

            if ( sum2 > sum) {
                sum = sum2;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", arr[i][j]);
        }    
    printf("\n");
    }

    printf("가장 매장량이 많은 구역의 매장량은 %d입니다.", sum);

    return 0;
}
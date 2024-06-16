#include <stdio.h>

int main(void) {
    int arr[3][5] = { {12, 56, 32, 16, 98}, {99, 56, 34, 41, 3}, {65, 3, 87, 78, 21}};
    int a = 0;

    for (int i = 0; i < 3; i++) {
        a = 0;
        for ( int j = 0; j < 5; j++) {
            a += arr[i][j];
        }
        printf("%d행의 합계: %d\n", i, a);
    }

    for (int i = 0; i < 5; i++) {
        a = 0;
        for ( int j = 0; j < 3; j++) {
            a += arr[j][i];
        }
        printf("%d열의 합계: %d\n", i, a);
    }    
    return 0;
}
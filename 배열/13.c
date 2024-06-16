#include <stdio.h>

int main(void) {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int brr[3][3] = { {0, 2, 4}, {-2, 0, 2}, {-4, -2, 0} };

    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] *= 2;
        }
    }

    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int crr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 3; j++) {
            crr[i][j] += brr[i][j];
        }
    }   

    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }   
    return 0;
}
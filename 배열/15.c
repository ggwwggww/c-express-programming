#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    int arr[10][10] = { 0 };
    int n = 5, m = 5;
    arr[5][5] = 1;

    for (int i = 0; i < rand() % 8; i++) {
        int number = rand() % 8;
 
        switch (number) {
        case 0:
            arr[n - 1][m] = 1; 
            n = n - 1; 
            break;
        case 1:
            arr[n - 1][m + 1] = 1;
            n = n - 1; m = m + 1; 
            break;
        case 2:
            arr[n][m + 1] = 1;
            m = m + 1; 
            break;
        case 3:
            arr[n + 1][m + 1] = 1; 
            n = n + 1; m = m + 1; 
            break;
        case 4:
            arr[n + 1][m] = 1; 
            n = n + 1; 
            break;
        case 5:
            arr[n + 1][m - 1] = 1; 
            n = n + 1; m = m - 1; 
            break;
        case 6:
            arr[n][m - 1] = 1;
            m = m - 1; 
            break;
        case 7:
            arr[n - 1][m - 1] = 1;
            n = n - 1; m = m - 1; 
            break;
        }
    }

    for ( int i = 0; i < 10; i++) {
        for ( int j = 0; j < 10; j++) {
            if ( arr[i][j] == 1) {
                printf("#");
            }
            else {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
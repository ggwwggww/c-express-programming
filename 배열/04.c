#include <stdio.h>

void array_copy(int a[], int b[], int size) {
    for(int i = 0; i < size; i++) {
        b[i] = a[i];
    }
}

int main(void) {
    int arr[10], brr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    array_copy(arr, brr, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", brr[i]);
    }

    printf("\n배열이 복사되었음");

    return 0;    
}
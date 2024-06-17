#include <stdio.h>

void reverse_print(int* p, int size) {
    if (size <= 0) {
        return;
    }
    printf("A[] = ");

    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }
    putchar('\n');
}

int main() {
    int A[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(A) / sizeof(A[0]);

    printf("A[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    putchar('\n');
    reverse_print(A, size);

    return 0;
}
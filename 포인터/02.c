#include <stdio.h>

int main() {

    int arr[3];

    for (int i = 0; i < 3; i++) {
        printf("정수를 입력하시오: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("=======================\n");
    printf("주소\t\t값\n");
    printf("=======================\n");

    for (int i = 0; i < 3; i++) {
        printf("%08x\t%03d\n", &arr[i], arr[i]);
    }
    return 0;
}
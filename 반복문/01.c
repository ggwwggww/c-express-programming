#include <stdio.h>

int main(void) {
    int a;
    printf("카운터의 초기값을 입력하시오(단위: 초): ");
    scanf("%d", &a);

    for ( int i = a; i > 0; i-- ) {
        printf("%d", i);
        Sleep(1000);
    }

    printf("\a");

    return 0;
}
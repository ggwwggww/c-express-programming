#include <stdio.h>

int main(void) {
    int a,b;
    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &a, &b);

    int sum;

    if ( a > b ) {
        sum = a;
    }
    else {
        sum = b;
    }

    while (1) {
        if ( sum % a == 0 && sum % b == 0 ) {
            break;
        }
        sum++;
    }

    printf("최소공배수는 %d입니다.", sum);

    return 0;
}
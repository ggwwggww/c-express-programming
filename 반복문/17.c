#include <stdio.h>

int main(void) {
    char c;
    int x, y;

    while (1) {
        printf("**********\n");
        printf("A----Add\n");
        printf("S----Substract\n");
        printf("M----Multipy\n");
        printf("D----Divide\n");
        printf("Q----Quit\n");
        printf("**********\n");
        printf("연산을 선택하시오: ");
        c = getchar();

        if ( c == 'Q') {
            break;
        }

        printf("두 수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d", &x, &y);

        if ( c == 'S') {
            printf("%d\n", x - y);
        }

        else if ( c == 'A') {
            printf("%d\n", x + y);
        }

        else if ( c == 'D') {
            printf("%d\n", x / y);
        }

        else if ( c == 'M') {
            printf("%d\n", x * y);
        }

        else {
            printf("지원되지 않는 연산자 입니다.\n");
        }
    }

    return 0;
    
}
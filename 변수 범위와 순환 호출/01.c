#include <stdio.h>

void plus (int a, int b) {
    static int count = 0;
    count++;
    printf("덧셈은 총 %d 실행되었습니다.\n", count);
    printf("연산의 결과: %d", a + b);

}

void minus (int a, int b) {
    static int count = 0;
    count++;
    printf("뺄셈은 총 %d 실행되었습니다.\n", count);
    printf("연산의 결과: %d", a - b);

}

void mul (int a, int b) {
    static int count = 0;
    count++;
    printf("곱셈은 총 %d 실행되었습니다.\n", count);
    printf("연산의 결과: %d", a * b);

}

void nanu (int a, int b) {
    static int count = 0;
    count++;
    printf("나눗셈은 총 %d 실행되었습니다.\n", count);
    printf("연산의 결과: %d", a / b);

}

int main(void) {
    int a, b;
    char c;

    while (1) {
    
        printf("연산을 입력하시오: ");
        scanf("%d %c %d", &a, &c, &b);

        if ( c == '+' ) {
            plus(a ,b);
        }

        if ( c == '-' ) {
            minus(a ,b);
        }

        if ( c == '*' ) {
            mul(a ,b);
        }

        if ( c == '/' ) {
            nanu(a ,b);
        }   

        if ( c == 'q') {
            break;
        }
    }
}
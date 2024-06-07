#include <stdio.h>

int main(void) {
    int a = 100;
    int c;

    while (1) {
        printf("현재 연료량: %d\n", a);
        if ( a < 20) {
            printf("(경고) 연료가 20리터 미만입니다.\n");
        }
        printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
        scanf("%d", &c);

        a += c;
        if ( a > 500 ) {
            printf("500리터 이상이 주유될 수 없습니다. 다시 입력하십시오\n");

            a -= c;
        }

        if  ( a <= 0 ) {
            printf("연료가 소진되어 정지합니다.");
            break;
        }

        return 0;
    }
    
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    int a, com;
    int com1, com2, a1, a2;

    printf("복권 번호를 입력하시오(0에서 99사이): ");
    scanf("%d", &a);
    a1 = a / 10;
    a2 = a % 10;

    com = rand()%100;
    com1 = com / 10;
    com2 = com % 10;

    printf("당첨번호는 %d입니다.", &com);

    if ( a1 == com1 && a2 == com2 ) {
        printf("100만원 당첨");
    }

    else if ( a1 == com1 || a2 == com2) {
        printf("50만원 당첨");
    }

    else {
        printf("상금이 없습니다");
    }

    return 0;
}
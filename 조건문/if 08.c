#include <stdio.h>

int main(void) {
    int t, a;

    printf("현재 시간과 나이를 입력하시오: ");
    scanf("%d %d", &t, &a);

    if ( t > 17 ) {
        printf("요금은 10000원 입니다");
    }

    else {
        if ( (a >= 3 && a <= 12) || a >= 65 ) {
            printf("요금은 25000원입니다.");
        }
        else {
            printf("요금은 34000원입니다.");
        }
    }

    return 0;
}
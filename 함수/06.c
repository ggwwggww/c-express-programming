#include <stdio.h>

int is_leap(int n) {
    if ( (n % 4 == 0 && n % 100 == 0) || ( n % 400 == 0 ) ) {
        return printf("%d년은 윤년입니다.");
    }

    else {
        return printf("%d년은 윤년이 아닙니다.");
    }
}

int main(void) {
    int n;
    printf("연도를 입력하시오: ");
    scanf("%d", &n);

    is_leap(n);

    return 0;
}
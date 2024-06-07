#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    if ( a > b && c > b) {
        printf("제일 작은 정수는 %d입니다.", b);
    }

    else if ( b > a && c > a) {
        printf("제일 작은 정수는 %d입니다.", a);
    }

    else {
       printf("제일 작은 정수는 %d입니다.", c); 
    }

    return 0;
}
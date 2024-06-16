#include <stdio.h>

int check() {
    static int count = 0;
    count++;

    if ( count == 3) {
        printf("로그인 시도 회수 초과\n");    
        return 1;
    }

    return 0;
}

int main(void) {
    int n;

    while (1) {
        printf("비밀번호: ");
        scanf("%d", &n);

        if ( n == 1234 ) {
            printf("아이디가 일치합니다.\n");
            break;
        }

        else {
            if ( check() ) {
                break;
            }
        }
    }

    return 0;
}
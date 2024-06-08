#include <stdio.h>

char check_alpha(char n) {
    if ( (n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
        return printf("%c는 알파벳 문자입니다.", n);
    }

    else {
        return printf("%c는 알파벳 문자가 아닙니다.", n);
    }
}
int main(void) {
    char c;
    printf("문자를 입력하시오: ");
    scanf("%c", &c);

    check_alpha(c);

    return 0;
}
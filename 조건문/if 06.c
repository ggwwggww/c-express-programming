#include <stdio.h>

int main(void) {
    char c;
    printf("문자를 입력하시오: ");
    
    c = getchar();

    switch (c)
    {
    case 'a':
    case 'e':
    case 'u':
    case 'o':
    case 'i':
        printf("모음입니다.");
        break;

    default:
        printf("자음입니다.");
        break;
    }

    return 0;
}
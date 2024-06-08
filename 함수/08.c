#include <stdio.h>

int get_tax(int n) {
    if ( n  < 1000 ) {
        return n * 0.08;
    }

    else {
        return ( n - 1000) * 0.1 + 1000 * 0.08;
    }
}

int main(void) {
    int n;
    printf("소득을 입력하시오(만 원): ");
    scanf("%d", &n);

    printf("소득세는 %d만원입니다.", get_tax(n));

    return 0;
}
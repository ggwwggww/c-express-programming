#include <stdio.h>

int sum(int n) {
    if ( n != 0) {
        return ( sum(n-1) + n);
    }

    else {
        return n;
    }
}

int main(void) {
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n); 

    printf("1부터 %d까지의 합= %d", n, sum(n));

    return 0;
}
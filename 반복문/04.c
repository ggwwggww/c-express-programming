#include <stdio.h>

int main(void) {
    int a;

    printf("정수를 입력하시오: ");
    scanf("%d", &a);

    printf("약수 ");

    for (int i = 1; i <= a; i++ ) {
        if ( a % i == 0 ) {
            printf("%d ", i);
        } 
    }

    return 0;
}
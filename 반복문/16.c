#include <stdio.h>

int main(void) {
    int n = 0;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

   do {
        int k = n % 10;
        printf("%d", k);
        n = n / 10;
    }   while ( n > 0 ); 

    return 0;
}
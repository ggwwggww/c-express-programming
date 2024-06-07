#include <stdio.h>

int main(void) {
    int sum = 0, n = 1;

    while(1) {
        sum += n;
        n++;

        if ( sum > 10000) {
            n--;
            sum -= n;
            printf("1부터 %d까지의 합이 %d입니다.", n-1, sum);
            break;
        }

    }
    return 0;   
}
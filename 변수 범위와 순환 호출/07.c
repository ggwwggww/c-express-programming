#include <stdio.h>
#include <math.h>

int power(int a, int b) {
    return pow(a, b);
}

int main(void) {
    int a, b;

    printf("밑수: ");
    scanf("%d", &a);
    printf("지수: ");
    scanf("%d", &b);

    printf("%d^%d = %d", a, b, power(a, b));

    return 0;
}
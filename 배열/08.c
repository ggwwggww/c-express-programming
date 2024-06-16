#include<stdio.h>
 
int main() {
    int num[3][10], input;
 
    printf("정수를 입력하시오: ");
    scanf("%d", &input);
 
    for (int i = 0; i < 10; i++) {
        num[0][i] = i + 1;
    }

    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            num[i][j] = num[i - 1][j] * (j + 1);
            if (input == num[i][j]) {
                printf("%d의 세제곱근은 %d\n", input, j+1);
                break;
            }
        }
    }

    return 0;
}

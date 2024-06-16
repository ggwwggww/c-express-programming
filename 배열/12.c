#include <stdio.h>

int main(void) {
    int product[10]={ 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };
    int n;
    printf("상품 번호를 입력하시오: ");
    scanf("%d", &n);
 
    printf("상품 번호 %d의 위치는 %d입니다.", n , product[n - 1]);
    return 0;   
}
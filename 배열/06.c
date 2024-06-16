#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lotto_numbers(int arr[6]) {
    int brr[46] = {0}; 
    int count = 0;
    srand(time(NULL)); // 시드 설정

    while (count < 6) {
        int a = rand()%45 + 1;

        if (!brr[a]) {
            brr[a] = 1;
            arr[count] = a; // 배열에 저장
            count++;
        }
    }
}

int main() {
    int arr[6];

    lotto_numbers(arr);

    printf("로또 번호는 다음과 같습니다.");
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}

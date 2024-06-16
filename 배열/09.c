#include <stdio.h>
#include <math.h>

double average(int arr[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}

double standard_deviation(int arr[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += pow(arr[i] - average(arr, size), 2);
    }  

    int aa;
    aa = sum / size;

    return sqrt(aa);
}

int main(void) {
    int arr[10];

    for(int i = 0; i < 10; i++) {
        printf("데이터를 입력하시오:");
        scanf("%d", &arr[i]);
    }

    printf("평균값은 %lf\n", average(arr, 10));

    printf("표준편차값은 %lf\n", standard_deviation(arr, 10));
}
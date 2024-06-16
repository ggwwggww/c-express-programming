#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_distance(double x1, double x2, double y1, double y2) {
    return sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2) );
}

int main(void) {
    double x1, x2, y1, y2;

    printf("첫 번째 점의 좌표를 입력하시오: ");
    scanf("%lf %lf", &x1, &y1);

    printf("두 번째 점의 좌표를 입력하시오: ");
    scanf("%lf %lf", &x2, &y2);

    printf("두 점 사이의 거리는 %lf입니다.", get_distance(x1, x2, y1, y2));

    return 0;
}
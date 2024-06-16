#include <stdio.h>

void vector_add(double x[], double y[], double z[]) {
     for (int i = 0; i < 3; i++) {
        z[i] = x[i] + y[i];
    }
}

int main(void) {
    double x[3], y[3], z[3];

    for (int i = 0; i < 3; i++) {
            scanf("%lf", &x[i]);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%lf", &y[i]);
    }
    vector_add(x, y, z);
    printf("백터의 합 = [%lf, %lf, %lf]",z[0],z[1],z[2]);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    double n, c = 0;
    
    printf("반복 횟수: ");
    scanf("%lf", &n);

    for (int i = 0; i < n; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;  

        if (x * x + y * y <= 1.0) {
            c++;
        }
    }

    double pi = 4 * c / n;

    printf("파이 =  %lf", pi);

    return 0;
}

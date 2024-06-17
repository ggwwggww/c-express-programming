#include <stdio.h>
#include <time.h>

void get_frac(double f, int* pi, double* pd) {
	*pi = (int)f;
	*pd = f - *pi;
}

int main(void){

	double d;
	double f;
	int i;


	printf("실수를 입력하시오: ");
	scanf("%lf", &d);
	get_frac(d, &i, &f);

	printf("\n");
	printf("get_frac(3.14)이 호출되었습니다\n", d);
	printf("정수부는 %d입니다.\n", i);
	printf("소수부는 %.2lf입니다.\n", f);

    return 0;
}
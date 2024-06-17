#include<stdio.h>

void convert(double* grades, double* scores, int size) {

	for (int i = 0; i < size; i++) {
		scores[i] = (100 / 4.3) * grades[i];
	}
}

int main() {

	double g[] = { 00.00, 00.50, 01.00, 01.50, 02.00, 02.50, 03.00, 03.50, 04.00, 04.30 };
	double s[10];

	convert(g, s, 10);
	for (int i = 0; i < 10; i++) {
		printf("%5.2lf ", g[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%5.2lf ", s[i]);
	}
}
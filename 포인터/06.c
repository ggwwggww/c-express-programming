#include<stdio.h>
#include<stdlib.h>

void array_print(int* A, int size) {

	int i;

	printf("A[] = { ");

	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");
}

int main() {

	int a[] = { 1,2,3,4,0,0,0,0,0,0 };
	array_print(a, 10);
}
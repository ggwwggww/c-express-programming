#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_random() {
	static int inited = 0;
	if (inited == 0) {
		srand((unsigned int)time(NULL));
		printf("초기화 실행\n");
		inited = 1;
	}
	else {
		printf("%d\n", rand());
	}
}

int main(void){
	get_random();
	get_random();
	get_random();
	get_random();
	return 0;
}
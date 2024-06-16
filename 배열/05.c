#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main() {
    int num[10] = { 0 };
    srand((unsigned)time(NULL));
    for (int i = 0; i < 100; i++) {
        num[rand() % 10]++;
    }
    
    int n = num[0], a = 0;
    
    for (int j = 1; j < 10; j++) {
        if (n < num[j]) {
            n = num[j]; a = j;
        }
    }
    printf("가장 많이 나온수=%d", a);
    return 0;
}
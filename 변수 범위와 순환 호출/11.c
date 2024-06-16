#include <stdio.h>

int fibo(int n) {
    int a = 0, b = 1;
    
    if ( n == 0 ) {
        return a;
    }

    if ( n == 1 ) {
        return b;
    }

    return fibo(n-1) + fibo(n-2);
}

int main(void) {
    int n, a = 0, b = 1;

    for ( int i = 0; i < 10; i++ ) {
        printf("fib(%d) = %d\n", i, fibo(i));
    }
    
    return 0;
} 
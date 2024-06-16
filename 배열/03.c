#include <stdio.h>

int array_equal (int a[], int b[], int size) {
    int count = 0;

    for ( int i = 0; i < size; i++ ) {
        if ( a[i] == b[i] ) {
            count++;
        }
    }

    if ( count == size) {
        return 1;
    }

    return 0;
}


int main(void) {
    int a[10]={0}, b[10]={0};
 
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int j = 0; j < 10; j++) {
        scanf("%d", &b[j]);
    }   

    if ( array_equal(a, b, 10)) {
        printf("2개의 배열은 같음");
        return 0;
    }

    else {
        printf("2개의 배열은 다름");
    }

    return 0;
}
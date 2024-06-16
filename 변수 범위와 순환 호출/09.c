#include <stdio.h>

void reverse_print() {
    char c = getchar(); 
    if (c != '\n') { 
        reverse_print(); 
        printf("%c", c);
    }
}

int main() {
    printf("문장을 입력하시오: ");
    reverse_print();
    printf("\n"); 

    return 0;
}

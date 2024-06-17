#include <stdio.h>

int my_strlen(char* p) {

    int count = 0;

    while (*p != '\0') {
        count++;
        p++;
    }
    return count;
}

int main() {
    char arr[] = "HELLO";
    int length = my_strlen(arr);

    printf("저장된 문자열 = %s\n", arr);
    printf("문자열의 길이 = %d\n", length);

    return 0;
}
#include <stdio.h>

int main(void) {
    printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다.\n");
    printf("하나의 숫자를 생각하세요.\n");
    printf("컴퓨터가 제시한 숫자보다 정답이 높으면 1, 낮으면 -1라고 하세요.\n");
    printf("컴퓨터가 숫자를 맞히면 0이라고 하세요.\n");

    int high = 100, low = 0;

    while (1) {
        int com = ( high + low ) / 2;
        int n;
        
        printf("숫자가 %d인가요? ", com);
        
        scanf("%d", &n);
        
        if ( n == -1 ) {
            high = com;
        }

        if ( n == 1 ) {
            low = com;
        }

        if ( n == 0 ) {
            break;
        }
    }
    return 0;
}
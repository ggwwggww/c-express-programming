#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    int stick = 12;
    int human, com;

    while (1) {
        printf("현재 스틱의 개수: %d\n", stick);
        printf("몇개의 스틱을 가져가시겠습니까? :");
        scanf("%d", &human);

        stick -= human;

        if ( stick == 0 ) {
            printf("남은 스틱이 없습니다. 당신의 패배 입니다.");
            break;
        }

        com = rand()%4;

        if ( com > stick ) {
            com = rand()%(stick)+1;
        }

        printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n", com);
        stick -= com;


        if ( stick <= 0 ) {
            printf("남은 스틱이 없습니다. 컴퓨터의 패배입니다.");
            break;
        }
    }

    return 0;
}
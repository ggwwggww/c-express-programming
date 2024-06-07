#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    int a, com;
    printf("(1:가위 2:바위 3: 보) 중에서 하나를 선택하시오: ");
    scanf("%d", &a);

    com = rand()%3 +1;

   if ( com == 1 ) {
    printf("컴퓨터는 가위를 선택하였습니다.\n");
   }
   else if ( com == 2) {
    printf("컴퓨터는 바위를 선택하였습니다.\n");
   }
   else {
    printf("컴퓨터는 보를 선택하였습니다.\n");
   }

   if (a == 1) { 
    if ( com == 1) {
        printf("비겼습니다.\n");
    }
    else if ( com == 2) {
        printf("사용자가 졌습니다.\n");
    }
    else {
        printf("사용자가 이겼습니다.\n");
    }
   }

    if (a == 2) { 
    if ( com == 2) {
        printf("비겼습니다.\n");
    }
    else if ( com == 3) {
        printf("사용자가 졌습니다.\n");
    }
    else {
        printf("사용자가 이겼습니다.\n");
    }
   }

   if (a == 3) { 
    if ( com == 3) {
        printf("비겼습니다.\n");
    }
    else if ( com == 1) {
        printf("사용자가 졌습니다.\n");
    }
    else {
        printf("사용자가 이겼습니다.\n");
    }
   }
   return 0;
}
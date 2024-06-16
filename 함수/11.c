#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int user1, user2, user3, all_user;
    int com1, com2, com3, all_com;

    user1 = rand()%6 +1;
    user2 = rand()%6 +1;
    user3 = rand()%6 +1;

    all_user = user1 + user2 + user3;

    com1 = rand()%6 +1;
    com2 = rand()%6 +1;
    com3 = rand()%6 +1;

    all_com - com1 + com2 + com3;

    pritnf("사용자의 주사위=(%d, %d, %d)=%d", user1, user2, user3, all_user);
    printf("컴퓨터의 주사위=(%d, %d, %d)=%d", com1, com2, com3, all_com);

    if ( all_com > all_user ) {
        printf("컴퓨터 승리");
    }    

    else if ( all_com < all_user ) {
        printf("사용자 승리");
    }

    else {
        printf("무승부");
    }

    return 0;
}
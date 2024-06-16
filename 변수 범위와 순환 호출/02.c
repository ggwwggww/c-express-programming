#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face(int n) {
    static int count_one = 0;
    static int count_two = 0;
    static int count_three = 0;
    static int count_four = 0;
    static int count_five = 0;
    static int count_six = 0;
    static int count = 0;

    if ( n == 1) {
        count_one++;
    }
    else if ( n == 2) {
        count_two++;
    }

    else if ( n == 3) {
        count_three++;
    }

    else if ( n == 4) {
        count_four++;
    }

    else if ( n == 5) {
        count_five++;
    }

    else {
        count_six++;
    }

    count++;

    if ( count == 100) {
        printf("1->%d\n", count_one);
        printf("2->%d\n", count_two);
        printf("3->%d\n", count_three);
        printf("4->%d\n", count_four);
        printf("5->%d\n", count_five);
        printf("6->%d\n", count_six);
    }
}

int main(void) {
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 101; i++) {
        int a = rand()%6+1;
        get_dice_face(a);
    }

    return 0;
}
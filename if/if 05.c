#include <stdio.h>

int main(void) {
    int a;
    
    printf("월 번호를 입력하시오: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1: 
        printf("JAN");
        break;
    
    case 2: 
        printf("FEB");
        break;

    case 3: 
        printf("MAR");
        break;

    case 4: 
        printf("APR");
        break;

    case 5: 
        printf("MAY");
        break;

    case 6: 
        printf("JUN");
        break;

    case 7: 
        printf("JUL");
        break;

    case 8: 
        printf("AUG");
        break;

    case 9: 
        printf("SEP");
        break;

    case 10: 
        printf("OCT");
        break;

    case 11: 
        printf("DEC");
        break;

    case 12: 
        printf("NOV");
        break;
    
    default:
        printf("잘못된 입력입니다.\n");
        break;
    }

    return 0;
}
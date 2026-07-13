#include <stdio.h>

int main()
{
    int sec , hour ;

    printf("enter hour :");
    scanf("%d", &hour);

    sec = hour * 3600 ;

    printf("second = %d",sec);
    return 0;
}
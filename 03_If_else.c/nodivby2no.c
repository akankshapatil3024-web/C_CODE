#include <stdio.h>

int main()
{
    int a ;

    printf("enter a :");
    scanf("%d", &a);

    if(a % 5 == 0 && a % 11 == 0){
        printf("it is divisible by both 5 & 11\n");
    }else
    {
        printf("it is not divisible");
    }
    

    return 0;
}
#include <stdio.h>

int main()
{
    int y ; 

    printf("enter year :");
    scanf("%d", &y);

    if (y % 4 == 0)
    {
        printf("leap year \n");
    }else
    {
        printf("not a leap year\n");
    }
    
    
    return 0;
}
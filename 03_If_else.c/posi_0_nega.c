#include <stdio.h>

int main()
{
    int a ;

    printf("enter the number :");
    scanf("%d", &a);

    if (a > 0)
    {
       printf("positive number \n");
    }
    else if (a < 0)
    {
       printf("negative number \n");
    }
    else
    {
      printf("0");
    }
    
    return 0;
}
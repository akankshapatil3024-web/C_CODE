#include <stdio.h>

int main()
{
    int n;
    do
    {
printf("enter n :");
scanf("%d", &n);
printf("%d\n",n);    
if (n % 7 == 0)
{
    
    printf("u entered the %dth multiple",n);
    break;
}
    }
    while (1);
    return 0;
}
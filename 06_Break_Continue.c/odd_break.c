#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("enter a number:");
        scanf("%d", &n);
        printf("%d\n",n);

        if (n%2!=0)
        {
        printf("the entered number is odd\n");
           break;
        }
    } while (1);
    return 0;
}
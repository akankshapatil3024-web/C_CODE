#include <stdio.h>

int main()
{
    int a , b ;

    printf("enter a :");
    scanf("%d", &a);

    printf("enter b :");
    scanf("%d", &b);

    (a>b) && printf("largest number is %d",a);
    (a<b) && printf("largest number is %d",b);
    return 0;
}
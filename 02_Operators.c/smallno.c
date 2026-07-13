#include <stdio.h>

int main()
{
    int a ,b;

    printf("enter a :");
    scanf("%d", &a);

    printf("enter b :");
    scanf("%d", &b);

    (a<b) && printf("smallest no :%d",a);
    (b<a) && printf("smallest no :%d",b);
    
    return 0;
}
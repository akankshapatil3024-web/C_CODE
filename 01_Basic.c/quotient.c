#include <stdio.h>

int main()
{
    int a , b, q;
    printf("enter a :");
    scanf("%d", &a);
    
    printf("enter b :");
    scanf("%d", &b);

    q = a / b ;
    printf("Quotient = %d",q);
    return 0;
}
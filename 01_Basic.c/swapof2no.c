#include <stdio.h>

int main()
{
    int a , b ,temp;
    printf("enter a :");
    scanf("%d", &a);

    printf("enter b :");
    scanf("%d", &b);
    printf("before swapping : a = %d ,b = %d",a,b);
    temp = a ;
    a = b ;
    b= temp ;

    
    printf("\nafter swapping : a = %d , b = %d",b,a);
    return 0;
}
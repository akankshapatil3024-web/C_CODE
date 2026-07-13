#include <stdio.h>

int main()
{
    float km , m ;
    printf("enter km :");
    scanf("%f", &km);

    m = km / 1000 ;

    printf("meter = %.3f", m);
    return 0;
}
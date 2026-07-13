#include <stdio.h>

int main()
{
    float m , cm ; 

    printf("enter m :");
    scanf("%f", &m);

    cm = m / 100 ;
    printf("centimeter = %.3f",cm);
    return 0;
}
#include <stdio.h>

int main()
{
    float a,b,c;

printf("enter a :");
scanf("%f", &a);

printf("enter b:");
scanf("%f", &b);

printf("enter c :");
scanf("%f", &c);

float average = (a + b + c)/3;

printf("average is : %f",average);

    return 0;
}
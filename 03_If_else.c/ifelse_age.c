#include <stdio.h>

int main()
{
    int age;
    printf("enter age :");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("adult and can drive");
    }
    else
    {
        printf("not an adult and cannot drive");
    }
    return 0;
}
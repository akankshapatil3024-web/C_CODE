#include <stdio.h>

int main()
{
    int f , c ;
    
    printf("enter temp in c : ");
    scanf("%d", &c);

    f = (c * 9 / 5) + 32 ; 

    printf("fahrenheit = %d\n",f);
    return 0;
}
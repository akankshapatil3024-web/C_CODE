#include <stdio.h>
int main (){
    float l,b,perimeter;
    printf("enter l:");
    scanf("%f",&l);

    printf("enter b:");
    scanf("%f",&b);

    perimeter = 2 * (l+b) ;
    printf("perimeter of rectangle :%f",perimeter);

    return 0 ;
}
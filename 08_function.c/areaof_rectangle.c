#include <stdio.h>
float rectangleArea(float a ,float b);
int main()
{
    int a = 5.0;
    int b = 10.0;
    printf("area = %.2f\n",rectangleArea(a,b)); 
    return 0;
}
float rectangleArea(float a , float b){
    return a * b ;
}
#include <stdio.h>
float squareArea(float side);
int main()
{
    int side = 5.0;
    printf("area = %.2f\n",squareArea(side));
    return 0;
}
float squareArea(float side){
    return side * side ;
}
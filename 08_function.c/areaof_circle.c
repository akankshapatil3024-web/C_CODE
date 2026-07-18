#include <stdio.h>
float circleArea(float rad);
int main()
{
    int rad = 1.0;
    printf("area = %.2f\n",circleArea(rad));
    return 0;
}
float circleArea(float rad){
    return 3.14 * rad * rad ;
}
#include <stdio.h>
void calcPrice(float value);
int main()
{
    float value = 100.0 ;
    calcPrice(value);
    printf("value = %f\n",value);
    return 0;
}
void calcPrice(float value){
    value = value + (0.18 * value);
    printf("value = %f\n",value);
}
#include <stdio.h>
float convertTemp(float fahrenheit);
int main()
{
    printf("%f",convertTemp(98.6));
    return 0;
}
float convertTemp(float fahrenheit){
    float celsius = (fahrenheit - 32) * 5 / 9 ;
    return celsius ;
}
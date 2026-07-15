#include <stdio.h>
float convertTemp (float celsius);
int main()
{
    printf("%f",convertTemp(36));
    return 0;
}
float convertTemp(float celsius)
{
   float fah = celsius * 9.0 / 5.0 + 32 ;
   return fah ;
}





// if it its sunday & its raining 

#include <stdio.h>

int main()
{
    int isSunday=1;
    int isRaining=1;
    printf("%d\n",isSunday && isRaining);
    printf("%d\n",isSunday || isRaining);
    printf("%d\n",!(isSunday && isRaining));
   
    return 0;
}
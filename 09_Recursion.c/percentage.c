#include <stdio.h>
int calcPercentage(int science , int maths , int hindi);
int main()
{
    int science = 98 ;
    int maths = 99 ;
    int hindi = 35 ;
    printf("percentage is = %d",calcPercentage(science , maths , hindi));
    return 0;
}
int calcPercentage (int science , int maths , int hindi){
    return ((science + maths + hindi) / 3 ) ;
}


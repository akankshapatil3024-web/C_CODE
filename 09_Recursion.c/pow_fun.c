#include <stdio.h>
#include <math.h>
int power (int x , int y);
int main()
{
    int x , y ;
    printf("enter x and y :");
    scanf("%d%d", &x , &y);
    printf("%d\n",power(x , y));
    return 0;
}
int power (int x , int y){
    return pow(x,y);
}
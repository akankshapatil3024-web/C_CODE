#include <stdio.h>
#include <math.h>
int main (){
    float p,r,t,amount,CI;

    printf("enter p:");
    scanf("%f",&p);

    printf("enter r:");
    scanf("%f",&r);

    printf("enter t:");
    scanf("%f",&t);

amount = p * pow((1+r/100),t);
CI = amount - p ;

printf("CI = %.2f",CI);
return 0 ;
}
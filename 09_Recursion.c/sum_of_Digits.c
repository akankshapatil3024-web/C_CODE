#include <stdio.h>
int sum (int n);
int main()
{
    int t ; 
    printf("enter t :");
    scanf("%d", &t);
    printf("sum = %d",sum(t));
    return 0;
}
int sum (int n){
    if(n == 0){
        return 0 ;
    }
    int sumNm1 = n % 10 ;
    int sumNm2 = sum (n / 10);
    int sumD = sumNm1 + sumNm2 ;
    return sumD ; 
}
#include <stdio.h>
int sum (int n);
int main()
{
    printf("sum = %d",sum(5));
    return 0;
}
int sum (int n){
    if (n == 0)
    {
        return 0 ;
    }
    
    int sumNm1 = sum (n - 1);
    int sumN = sum(n - 1) + n ;
    return sumN ;
}
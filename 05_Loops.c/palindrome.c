#include <stdio.h>

int main()
{
    int n , temp , reverse = 0 , rem ;

    printf("enter n :");
    scanf("%d", &n);

    temp = n ;

    while (n > 0)
    {
        rem = n % 10 ;
        reverse = reverse * 10 + rem ;
        n = n / 10 ;
    }

    if(temp == reverse){
        printf("%d is a palindrome\n",temp);
    }else
    {
        printf("%d is not a palindrome\n",temp);
    }
    
    
    return 0;
}
#include <stdio.h>
int squrt(int n);
int main()
{
    int n ;
    printf("enter n :");
    scanf("%d", &n);

    printf("%d",squrt(n));
    return 0;
}
int squrt(int n){
    return n * n ;
}
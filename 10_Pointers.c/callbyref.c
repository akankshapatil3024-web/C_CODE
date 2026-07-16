#include <stdio.h>
int _square (int *n);
int main()
{
    int number = 4 ;
    _square(&number);
    printf("number = %d\n",number);
    return 0;
}
int _square(int *n){
    *n = (*n) * (*n) ;
    printf("square = %d\n",*n);
}
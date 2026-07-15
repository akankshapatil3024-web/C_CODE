#include <stdio.h>
float bodyTemp(float n);
int main()
{

    float n ;
    printf("enter n :");
    scanf("%f",&n);
    bodyTemp(n);
    return 0;

}

float bodyTemp(float n){
    if(n >= 97.5){
        printf("HOT\n");
    }
    else
    {
        printf("COLD\n");
    }
    return n ;
    }
    

#include <stdio.h>

int main()
{
    int marks ;

    printf("enter marks(1-100) :");
    scanf("%d", &marks);

    if (marks>=90 && marks<=100)
    {
     printf("A+");   
    }
    else if (marks<90 && marks >=70)
    {
        printf("A");
    }
    else if (marks<70 && marks >=50 )
    {
       printf("B");
    }
    else if (marks <50 && marks >=30)
    {
        printf("C");
    }
    else
    {
        printf("fail\n");
    }
    
    return 0;
}
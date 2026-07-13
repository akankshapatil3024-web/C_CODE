#include <stdio.h>

int main()
{
    int marks ;
    
    printf("enter marks :");
    scanf("%d", &marks);

    if (marks<30)
    {
      printf("fail\n");
    }
    else
    {
        printf("pass\n");
    }
    
    
    return 0;
}
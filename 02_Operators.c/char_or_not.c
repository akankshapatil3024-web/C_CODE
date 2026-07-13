#include <stdio.h>

int main()
{
    char ch;
    printf("enter ch :");
    scanf("%c", &ch);

    printf("%d",ch > '0' && ch < '9' );
    return 0;
}
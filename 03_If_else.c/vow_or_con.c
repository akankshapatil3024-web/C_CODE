#include <stdio.h>

int main()
{
    char ch ;

    printf("enter a alphabet :");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("the given alphabet is an vowel\n");
    }else
    {
        printf("consonant\n");
    }
    
    
    return 0;
}
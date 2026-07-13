#include <stdio.h>

int main()
{
    char ch;

    for (char ch = 'z'; ch >= 'a'; ch--)
    {
        printf("%c\n",ch);
    }

    return 0;
}
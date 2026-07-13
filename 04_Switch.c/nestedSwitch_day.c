#include <stdio.h>

int main()
{
    int day,shift;

    printf("enter day:");
    scanf("%d", &day);

    printf("enter shift:");
    scanf("%d", &shift);

    switch (day)
    {
    case 1:
       printf("Monday\n");
       switch (shift)
       {
       case 1:
       printf("Morning shift\n");
        break;
       case 2 :
       printf("Evening shift \n");
       break;
       default:
       printf("not a valid shift\n");
        break;
       }
        break;
        case 2 :
        printf("Tuesday\n");
        switch (shift)
       {
       case 1:
       printf("Morning shift\n");
        break;
       case 2 :
       printf("Evening shift \n");
       break;
       default:
       printf("not a valid shift\n");
        break;
       }
        break;
       
    default:
    printf("Invalid day & shift\n");
        break;
    }
    return 0;
}
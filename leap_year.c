#include <stdio.h>

int main()
{
    int y;
     printf("Enter a year:\n");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        printf("It is a leap year\n");
    }
    else
    {
        printf("It is not a leap year\n");
    }

    return 0;
}
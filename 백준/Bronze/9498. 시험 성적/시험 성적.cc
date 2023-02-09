#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if(90<=a)
    {
        if (a<=100)
        {
            printf("A");
        }
    }
    else if(80<=a)
    {
        if (a<=89)
        {
            printf("B");
        }
    }
    else if(70<=a)
    {
        if (a<=79)
        {
            printf("C");
        }
    }
    else if(60<=a)
    {
        if (a<=69)
        {
            printf("D");
        }
    }
    else
    {
        printf("F");
    }

    return 0;
}
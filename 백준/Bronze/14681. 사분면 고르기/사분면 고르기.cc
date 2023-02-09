#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(0>x)
    {
        if(0>y)
        {
            printf("3");
        }
        else
        {
            printf("2");
        }

    }

    if(0<x)
    {
        if(0>y)
        {
            printf("4");
        }
        else
        {
            printf("1");
        }

    }  
    
    return 0;
}
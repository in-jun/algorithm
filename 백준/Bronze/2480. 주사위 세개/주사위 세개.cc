#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);
   
    if (a==b)
    {
        if (a==c)
        {
            printf("%d", 10000+(a*1000));

        }
        else
        {
            printf("%d", 1000+(a*100));
        }
        
    }
    else if (b==c)
    {
        printf("%d", 1000+(b*100));
    }
    else if (a==c)
    {
        printf("%d", 1000+(a*100));
    }
    else
    {
        if (a>b)
        {
            if (a>c)
            {
                printf("%d", a*100);
            }

        }


        if (b>c)
        {
            if (b>a)
            {
                printf("%d", b*100);
            }

        }
    
    
        if (c>a)
        {
            if (c>b)
            {
                printf("%d", c*100);
            }

        }

    }
    
    

    return 0;
}
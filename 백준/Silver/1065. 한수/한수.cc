#include <stdio.h>

int a = 0;

int abc(int n)
{
    if(100 > n)
    {
        a++;
    }
    else
    {
        if(1000==n)
        {
            return 0;
        }
        if(((n/100)-((n/10)%10))==(((n/10)%10)-(n%10)))
        {
            a++;
        }
    }
    return 0;
}

int main()
{
    int n = 0;
    int i = 0;
    scanf("%d", &n);
    for(i = 1;i <= n;i++)
    {
        abc(i);
        
    }
    printf("%d", a);
    return 0;
}

#include <stdio.h>
int a[10001];

int d(int n) 
{
    n = n + (n/10000) + ((n%10000)/1000) + ((n%1000)/100) + ((n%100)/10) + ((n%10)/1);
    return n;
}

int main()
{
    for (int i = 1; i <=10000; i++)
    {
        a[d(i)] = 1;  
    }   

    for (int i = 1; i <=10000; i++)
    {
        if(!a[i])
        {
            printf("%d\n", i);
        }    
    }

    return 0;
}
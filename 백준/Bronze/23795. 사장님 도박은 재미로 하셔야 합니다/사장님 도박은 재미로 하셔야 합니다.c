#include <stdio.h>

int main()
{
    int a,out=0;
    while (1)
    {
        scanf("%d",&a);
        if (a==-1)
        {
           break; 
        }
        out=a+out;
    }
    printf("%d",out);
    return 0;
}

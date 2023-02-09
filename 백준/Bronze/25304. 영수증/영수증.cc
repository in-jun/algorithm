#include <stdio.h>
int main()
{
    int x=0,n=0,a=0,b=0,output=0;

    scanf("%d",&x);
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        output = output + (a*b);
    }
    if(x==output)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}

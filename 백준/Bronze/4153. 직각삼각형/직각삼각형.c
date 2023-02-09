#include <stdio.h>

int main()
{
    int a=1,b=1,c=1;
    
    while(1)
    {
            scanf("%d %d %d",&a,&b,&c);
            if(a==0&&b==0&&c==0)
            {
                return 0;
            }
            a*=a,b*=b,c*=c;
            if(a==b+c||b==c+a||c==a+b)
            {
                 printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
    }
}
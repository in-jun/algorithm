#include <stdio.h>

int main()
{
    int i = 0;
    int a;
    int b;
    int c;
    
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (b>=c)
    {
        printf("-1");
    }
    else
    {   
        printf("%d\n",a/(c-b)+1);
    }
    

    return 0;

}

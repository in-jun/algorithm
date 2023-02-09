#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a);

    for (int i = a; i >= 1; i--)
    {
        a=a-i;
        printf("%d\n", i);
    }
    
    return 0;
}

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        printf("%d\n", b+c);
    }
    
    

    return 0;
}
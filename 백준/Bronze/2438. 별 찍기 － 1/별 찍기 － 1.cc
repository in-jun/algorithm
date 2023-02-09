#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int in = 0; in < i; in++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}

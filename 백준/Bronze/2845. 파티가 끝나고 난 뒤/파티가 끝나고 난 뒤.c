#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    printf("%d %d %d %d %d", c - (a * b), d - (a * b), e - (a * b), f - (a * b), g - (a * b));
    return 0;
}
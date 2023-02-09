#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    scanf("%d%d%d\n%d%d%d", &a, &b, &c, &d, &e, &f);
    printf("%d %d %d", d - c, e / b, f - a);
    return 0;
}

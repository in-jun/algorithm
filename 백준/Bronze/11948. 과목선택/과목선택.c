#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf("%d", (a + b + c + d) - (a < ((d < c ? d : c) < b ? (d < c ? d : c) : b) ? a : ((d < c ? d : c) < b ? (d < c ? d : c) : b)) + (e > f ? e : f));
    return 0;
}
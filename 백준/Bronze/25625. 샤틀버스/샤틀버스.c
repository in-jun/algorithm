#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", (x - y) <= 0 ? y - x : x + y);
    return 0;
}

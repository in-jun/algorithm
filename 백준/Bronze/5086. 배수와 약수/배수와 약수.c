#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) && a != 0 && b != 0)
    {
        printf("%s\n", a % b == 0 || b % a == 0 ? (a < b ? "factor" : "multiple") : "neither");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int a, n, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        count += a;
    }
    printf("%s", (n - count < count) ? "Junhee is cute!" : "Junhee is not cute!");
    return 0;
}

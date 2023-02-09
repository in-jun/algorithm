#include <stdio.h>
#define MIN(x, y) (x) < (y) ? (x) : (y)
#define MIN_3(x, y, z) (MIN(x, y)) < (z) ? (MIN(x, y)) : (z)
#define MIN_4(w, x, y, z) (MIN_3(x, y, z)) < (w) ? (MIN_3(x, y, z)) : (w)
int a = 0;
int b = 0;
int c()
{
    if (a < 5)
        return b;
    if (a < 10)
        return b - 500;
    if (a < 15)
        return MIN(b - 500, b * 0.9);
    if (a < 20)
        return MIN_3(b - 500, b * 0.9, b - 2000);
    return MIN_4(b - 500, b * 0.9, b - 2000, b * 0.75);
}
int main()
{
    scanf("%d %d", &a, &b);
    printf("%d", c() <= 0 ? 0 : c());
    return 0;
}
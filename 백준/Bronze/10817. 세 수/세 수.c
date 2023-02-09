#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", a > b ? (a > c ? (b > c ? b : c) : a) : (b > c ? (c > a ? c : a) : b));
    return 0;
}


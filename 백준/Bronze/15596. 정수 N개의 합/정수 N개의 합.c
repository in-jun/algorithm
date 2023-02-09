#include <stdio.h>

long long sum(int *a, int n)
{
    long long add = 0;
    for (int i = 0; i < n; i++)
    {
        add = add + a[i];
    }
    return add;
}
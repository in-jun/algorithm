#include <iostream>
#include <algorithm>
using std::sort;

int main()
{
    int n, arr[1000000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}
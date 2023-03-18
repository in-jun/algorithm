#include <iostream>
#include <algorithm>
using std::cin;
using std::sort;

int main()
{
    int n, m, arr[2000000];
    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr + (n + m));
    for (int i = 0; i < n + m; i++)
        printf("%d ", arr[i]);
    return 0;
}
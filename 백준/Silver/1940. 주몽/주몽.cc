#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int n, m, start = 0, count = 0;
    cin >> n >> m;
    int arr[n], end = n - 1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    while (start < end)
    {
        if (arr[start] + arr[end] > m)
            end--;
        else if (arr[start] + arr[end] < m)
            start++;
        else
        {
            count++;
            start++;
            end--;
        }
    }
    cout << count;
    return 0;
}
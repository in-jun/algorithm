#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int n, arr[1000000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << '\n';
    return 0;
}
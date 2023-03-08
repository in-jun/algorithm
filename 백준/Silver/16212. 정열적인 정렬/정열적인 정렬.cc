#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int n, arr[500000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >>
            arr[i];
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] <= k)
        {
            count += k / arr[i];
            k %= arr[i];
        }
    }
    cout << count;
    return 0;
}
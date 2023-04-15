#include <iostream>
using std::cin;
using std::cout;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long int n, m, count = 0;
    long int arr1[1000001]{0};
    long int arr2[1001]{0};
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr1[i];
        arr1[i] += arr1[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        arr1[i] %= m;
        count += !arr1[i];
        arr2[arr1[i]]++;
    }
    for (int i = 0; i < m; i++)
        count += arr2[i] * (arr2[i] - 1) / 2;
    cout << count;
    return 0;
}
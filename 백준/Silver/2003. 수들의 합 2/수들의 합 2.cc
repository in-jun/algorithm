#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, m;
    int start = 0, end = 0, count = 0, sum = 0;
    int arr[10001]{0};
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (end <= n)
    {
        if (sum >= m)
            sum -= arr[start++];
        else
            sum += arr[end++];
        if (sum == m)
            count++;
    }
    cout << count;
    return 0;
}
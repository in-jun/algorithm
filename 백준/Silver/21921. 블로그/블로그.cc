#include <iostream>
using std::cin;
using std::cout;
using std::max;

int main()
{
    int x, n, Max = 0, count = 0, arr[250001]{0};
    cin >> x >> n;
    for (int i = 1; i <= x; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    for (int i = n; i <= x; i++)
        Max = max(Max, arr[i] - arr[i - n]);
    for (int i = n; i <= x; i++)
        count += (Max == (arr[i] - arr[i - n]));
    if (!Max)
        cout << "SAD";
    else
        cout << Max << ' ' << count;
    return 0;
}
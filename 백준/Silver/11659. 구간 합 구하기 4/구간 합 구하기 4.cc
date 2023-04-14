#include <iostream>
using std::cin;
using std::cout;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, arr[100001]{0};
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        arr[i] = arr[i - 1] + input;
    }
    while (m--)
    {
        int i, j;
        cin >> i >> j;
        cout << arr[j] - arr[i - 1] << '\n';
    }
    return 0;
}
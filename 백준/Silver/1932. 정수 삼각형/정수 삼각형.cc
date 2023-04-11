#include <iostream>
using std::cin;
using std::cout;
using std::max;

int main()
{
    int n, dp[501][501]{0}, m = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> dp[i][j];
            dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
            m = max(m, dp[i][j]);
        }
    }
    cout << m;
    return 0;
}
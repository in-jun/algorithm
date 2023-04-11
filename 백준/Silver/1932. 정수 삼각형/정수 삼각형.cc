#include <iostream>
using std::cin;
using std::cout;
using std::max;
int main()
{
    int n, dp[501][501]{0}, m = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            cin >> dp[i][j];
    for (int i = 1; i < n; i++)
        for (int j = 0; j <= i; j++)
            dp[i][j] += max((0 <= (j - 1)) * dp[i - 1][j - 1], dp[i - 1][j]);
    for (int i = 0; i < n; i++)
        m = max(m, dp[n - 1][i]);
    cout << m;
    return 0;
}
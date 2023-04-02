#include <iostream>
using std::cin;
using std::cout;
using std::min;

int main()
{
    int dp[1000001]{0};
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (!(i % 2))
            dp[i] = min(dp[i], dp[i / 2] + 1);
        if (!(i % 3))
            dp[i] = min(dp[i], dp[i / 3] + 1);
    }
    cout << dp[n];
    return 0;
}
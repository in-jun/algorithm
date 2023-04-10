#include <iostream>
using std::cin;
using std::cout;

int main()
{
    unsigned long long int n, dp[36]{0};
    dp[0] = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < i; j++)
            dp[i] += dp[j] * dp[(i - j) - 1];
    cout << dp[n];
    return 0;
}
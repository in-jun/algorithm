#include <iostream>
using std::cin;
using std::cout;

int main()
{
    unsigned long long int n, dp[116]{1, 1, 1};
    cin >> n;
    for (int i = 3; i < n; i++)
        dp[i] = dp[i - 1] + dp[i - 3];
    cout << dp[n - 1];
    return 0;
}
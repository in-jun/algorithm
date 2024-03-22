#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::max;
using std::vector;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    vector<int> dp(n + 1, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    dp[0] = v[0];
    dp[1] = v[0] + v[1];

    for (int i = 2; i < n; i++)
        dp[i] = max(dp[i - 2] + v[i], dp[i - 3] + v[i - 1] + v[i]);

    cout << dp[n - 1];
    return 0;
}
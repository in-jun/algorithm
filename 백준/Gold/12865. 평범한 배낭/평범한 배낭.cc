#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::max;
using std::vector;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        int wi, vi;
        cin >> wi >> vi;

        for (int w = 1; w <= k; w++)
        {
            if (w < wi)
            {
                dp[i][w] = dp[i - 1][w];
            }
            else
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - wi] + vi);
            }
        }
    }

    cout << dp[n][k];
    return 0;
}
#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::min;

int main()
{
    int n, dp[3]{0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int temp0 = dp[0], temp1 = dp[1], temp2 = dp[2];
        dp[0] = min(temp1, temp2) + a;
        dp[1] = min(temp0, temp2) + b;
        dp[2] = min(temp0, temp1) + c;
    }
    cout << min({dp[0], dp[1], dp[2]});
    return 0;
}
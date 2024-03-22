#include <iostream>
using std::cin;
using std::cout;

int main()
{
    long long int dp[100]{1, 1, 1};

    int n;
    cin >> n;

    for (int i = 3; i < 100; i++)
        dp[i] = dp[i - 2] + dp[i - 3];

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        cout << dp[input - 1] << '\n';
    }
    return 0;
}
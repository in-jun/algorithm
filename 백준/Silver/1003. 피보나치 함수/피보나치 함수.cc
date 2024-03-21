#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::pair;
using std::vector;

int main()
{
    vector<pair<int, int>> ans;
    vector<int> dp1(41, 0);
    vector<int> dp2(41, 0);

    dp1[0] = 1;
    dp1[1] = 0;
    dp2[0] = 0;
    dp2[1] = 1;

    for (int j = 2; j <= 40; j++)
    {
        dp1[j] = dp1[j - 2] + dp1[j - 1];
        dp2[j] = dp2[j - 2] + dp2[j - 1];
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        ans.push_back({dp1[n], dp2[n]});
    }

    for (int i = 0; i < t; i++)
        cout << ans[i].first << ' ' << ans[i].second << '\n';
    return 0;
}
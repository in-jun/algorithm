#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;

    int dx[3]{1, 0, -1}, dy[3]{0, 1, -1};
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    int x = 0, y = 0;
    int dir = 0;

    for (int i = 1; i <= (n * (n + 1)) / 2; i++)
    {
        dp[x][y] = i;

        if ((0 > (dx[dir] + x)) || ((dx[dir] + x) >= n) ||
            (0 > (dy[dir] + y)) || ((dy[dir] + y) >= n) ||
            (dp[dx[dir] + x][dy[dir] + y]))
        {
            dir = (dir + 1) % 3;
        }

        x += dx[dir], y += dy[dir];
    }

    for (vector<int> v : dp)
    {
        for (int n : v)
        {
            if (n != 0)
            {
                answer.push_back(n);
            }
        }
    }

    return answer;
}
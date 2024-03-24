#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::sort;
using std::string;
using std::vector;

vector<vector<int>> map(25, vector<int>(25, 0));
vector<vector<int>> visited(25, vector<int>(25, 0));
int count;

int dfs(int x, int y)
{
    if (x < 0 || y < 0 || x >= 25 || y >= 25)
        return 0;
    if (map[x][y] == 0 || visited[x][y] == 1)
        return 0;

    visited[x][y] = 1;
    count++;

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);

    return count;
}

int main()
{
    vector<int> ans;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
            map[i][j] = s[j] - '0';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count = 0;
            if (map[i][j] == 1 && visited[i][j] == 0)
                ans.push_back(dfs(i, j));
        }
    }

    cout << ans.size() << '\n';

    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << '\n';

    return 0;
}
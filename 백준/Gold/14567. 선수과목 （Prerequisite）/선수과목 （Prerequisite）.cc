#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::max;
using std::queue;
using std::vector;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n + 1);
    vector<int> indeg(n + 1);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        indeg[y]++;
    }

    queue<int> q;

    for (int i = 1; i <= n; i++)
        if (indeg[i] == 0)
            q.push(i);

    vector<int> ans(n + 1, 1);

    while (q.size())
    {
        int now = q.front();
        q.pop();

        for (int next : a[now])
        {
            if (!--indeg[next])
            {
                q.push(next);
                ans[next] = max(ans[next], ans[now] + 1);
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';
    return 0;
}

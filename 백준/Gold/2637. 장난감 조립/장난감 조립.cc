#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::pair;
using std::queue;
using std::vector;

int main()
{
    int ans[101]{0};
    int indegree[101]{0};
    vector<pair<int, int>> a[101];

    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a[x].emplace_back(y, z);
        indegree[y]++;
    }

    queue<int> q;

    for (int i = 1; i <= n; ++i)
        if (!indegree[i])
            q.push(i), ans[i] = 1;

    while (q.size())
    {
        int now = q.front();
        q.pop();

        for (auto [np, nq] : a[now])
        {
            ans[np] += ans[now] * nq;

            if (!--indegree[np])
                q.push(np);
        }
    }

    for (int i = 1; i <= n; ++i)
        if (a[i].empty())
            cout << i << ' ' << ans[i] << '\n';
    return 0;
}
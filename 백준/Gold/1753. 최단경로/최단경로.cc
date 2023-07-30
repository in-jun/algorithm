#include <iostream>
#include <limits.h>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::greater;
using std::pair;
using std::priority_queue;
using std::vector;

typedef pair<int, int> edge;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<edge>> node(n + 1);
    vector<int> ans(n + 1, INT_MAX);
    ans[k] = 0;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        node[u].push_back({v, w});
    }

    priority_queue<edge, vector<edge>, greater<edge>> pq;
    pq.push({0, k});

    while (pq.size())
    {
        int f = pq.top().first;
        int s = pq.top().second;
        pq.pop();

        for (edge next : node[s])
        {
            int F = next.first;
            int S = next.second;

            if (f + S < ans[F])
            {
                ans[F] = f + S;
                pq.push({f + S, F});
            }
        }
    }

    for (int i = 1; i <= n; i++)
        if (ans[i] == INT_MAX)
            cout << "INF\n";
        else
            cout << ans[i] << '\n';
    return 0;
}
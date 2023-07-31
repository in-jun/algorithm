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
    int n, m;
    cin >> n >> m;

    vector<vector<edge>> node(n + 1);
    vector<int> ans(n + 1, INT_MAX);

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        node[u].push_back({v, w});
    }

    int start, end;
    cin >> start >> end;

    ans[start] = 0;

    priority_queue<edge, vector<edge>, greater<edge>> pq;
    pq.push({0, start});

    while (pq.size())
    {
        int f = pq.top().first;
        int s = pq.top().second;
        pq.pop();

        if (f > ans[s])
            continue;

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

    cout << ans[end];
    return 0;
}
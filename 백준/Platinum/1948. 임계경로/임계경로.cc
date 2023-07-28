#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::max;
using std::pair;
using std::queue;
using std::vector;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> indegree(n + 1);
    vector<vector<pair<int, int>>> a(n + 1);
    vector<vector<pair<int, int>>> reverse(n + 1);

    for (int i = 0; i < m; i++)
    {
        int s, e, v;
        cin >> s >> e >> v;

        a[s].push_back({e, v});
        reverse[e].push_back({s, v});
        indegree[e]++;
    }

    int start, end;
    cin >> start >> end;

    queue<int> q;
    q.push(start);

    vector<int> ans(n + 1);

    while (q.size())
    {
        int now = q.front();
        q.pop();

        for (pair<int, int> next : a[now])
        {
            ans[next.first] = max(ans[next.first], ans[now] + next.second);

            if (!--indegree[next.first])
                q.push(next.first);
        }
    }

    queue<int> rq;
    rq.push(end);

    int count = 0;
    vector<bool> visited(n + 1);
    visited[end] = true;

    while (rq.size())
    {
        int now = rq.front();
        rq.pop();

        for (pair<int, int> next : reverse[now])
        {
            if (ans[next.first] + next.second == ans[now])
            {
                count++;
                if (!visited[next.first])
                {
                    visited[next.first] = true;
                    rq.push(next.first);
                }
            }
        }
    }

    cout << ans[end] << '\n';
    cout << count;
    return 0;
}
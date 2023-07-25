#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::queue;
using std::vector;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> indegree(n + 1);
    vector<vector<int>> a(n + 1);

    for (int i = 0; i < m; i++)
    {
        int s, e;
        cin >> s >> e;
        a[s].push_back(e);
        indegree[e]++;
    }

    queue<int> q;

    for (int i = 1; i <= n; i++)
        if (!indegree[i])
            q.push(i);

    while (q.size())
    {
        int now = q.front();
        q.pop();

        cout << now << ' ';

        for (int next : a[now])
        {
            indegree[next]--;
            if (!indegree[next])
                q.push(next);
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using std::cin;
using std::cout;
using std::queue;
using std::sort;
using std::vector;

int main()
{

    int n, m, r;
    cin >> n >> m >> r;

    vector<vector<int>> graph(m + 1, vector<int>());

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 0; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    vector<int> visited(n + 1, 0);
    queue<int> q;
    q.push(r);

    vector<int> answer(n + 1, 0);
    int count = 1;

    while (!q.empty())
    {
        int node = q.front();
        visited[node] = true;
        answer[node] = count++;
        q.pop();

        for (int now : graph[node])
        {
            if (!visited[now])
            {
                visited[now] = true;
                q.push(now);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << answer[i] << '\n';
    }

    return 0;
}
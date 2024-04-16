#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::greater;
using std::queue;
using std::sort;
using std::vector;

int main()
{
    int n, m, r;
    cin >> n >> m >> r;
    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }

    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(r);

    int count = 1;
    vector<int> answer(n + 1, 0);

    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        visited[current] = true;

        answer[current] = count++;
        for (int now : graph[current])
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
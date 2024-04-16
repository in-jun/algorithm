#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::queue;
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

    queue<int> q;
    q.push(r);
    vector<bool> visited(n + 1, false);
    vector<int> answer(n + 1, -1);
    answer[r] = 0;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        visited[current] = true;

        for (int now : graph[current])
        {
            if (!visited[now])
            {
                q.push(now);
                visited[now] = true;
                answer[now] = answer[current] + 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << answer[i] << '\n';
    }

    return 0;
}
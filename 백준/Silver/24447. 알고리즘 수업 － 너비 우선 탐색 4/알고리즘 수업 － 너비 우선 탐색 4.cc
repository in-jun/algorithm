#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using std::cin;
using std::cout;
using std::pair;
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
        sort(graph[i].begin(), graph[i].end());
    }

    queue<int> q;
    q.push(r);
    vector<bool> visited(n + 1, false);

    int count = 1;
    vector<pair<long long int, long long int>> answer(n + 1, {-1, 0});
    answer[r] = {0, 0};

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        visited[cur] = true;
        answer[cur].second = count++;

        for (int g : graph[cur])
        {
            if (!visited[g])
            {
                q.push(g);
                visited[g] = true;
                answer[g].first = answer[cur].first + 1;
            }
        }
    }

    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += answer[i].first * answer[i].second;
    }

    cout << sum;
    return 0;
}
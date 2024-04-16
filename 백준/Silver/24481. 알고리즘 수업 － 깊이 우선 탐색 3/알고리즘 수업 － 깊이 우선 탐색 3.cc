#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::sort;
using std::vector;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> answer;

void dfs(int n);

int main()
{
    int n, m, r;
    cin >> n >> m >> r;

    graph.resize(n + 1);
    visited.resize(n + 1);
    answer = vector<int>(n + 1, -1);
    answer[r] = 0;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(r);

    for (int i = 1; i <= n; i++)
    {
        cout << answer[i] << '\n';
    }
    return 0;
}

void dfs(int n)
{
    visited[n] = true;

    for (int g : graph[n])
    {
        if (!visited[g])
        {
            answer[g] = answer[n] + 1;
            dfs(g);
        }
    }
}
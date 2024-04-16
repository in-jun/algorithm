#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::pair;
using std::sort;
using std::vector;

vector<vector<int>> graph;
vector<bool> visited;
vector<pair<long long int, long long int>> answer;
int count = 1;

void dfs(int g, int depth);

int main()
{
    int n, m, r;
    cin >> n >> m >> r;

    graph.resize(n + 1);
    visited.resize(n + 1);
    answer = vector<pair<long long int, long long int>>(n + 1, {-1, 0});

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

    dfs(r, 0);

    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += answer[i].first * answer[i].second;
    }

    cout << sum;
    return 0;
}

void dfs(int n, int depth)
{
    visited[n] = true;
    answer[n].first = depth;
    answer[n].second = count++;

    for (int g : graph[n])
    {
        if (!visited[g])
        {
            dfs(g, depth + 1);
        }
    }
}
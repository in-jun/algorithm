#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::max;
using std::pair;
using std::vector;

vector<vector<pair<int, int>>> graph;
vector<bool> visited;

vector<int> answer;

void dfs(int n, int cost);

int main()
{
    int n;
    cin >> n;

    graph.resize(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    visited = vector<bool>(n + 1, false);
    answer = vector<int>(n + 1, 0);
    dfs(1, 0);

    int maxIndex = 1;
    for (int i = 2; i <= n; i++)
    {
        if (answer[maxIndex] < answer[i])
        {
            maxIndex = i;
        }
    }

    visited = vector<bool>(n + 1, false);
    answer = vector<int>(n + 1, 0);
    dfs(maxIndex, 0);

    int ans = 0;
    for (int n : answer)
    {
        ans = max(ans, n);
    }

    cout << ans;
    return 0;
}

void dfs(int n, int cost)
{
    visited[n] = true;
    answer[n] = cost;

    for (pair<int, int> g : graph[n])
    {
        int next = g.first;
        int nextCost = g.second;

        if (!visited[next])
        {
            dfs(next, cost + nextCost);
        }
    }
}
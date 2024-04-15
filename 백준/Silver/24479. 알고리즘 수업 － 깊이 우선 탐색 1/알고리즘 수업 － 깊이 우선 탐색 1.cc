#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::sort;
using std::vector;

vector<vector<int>> graph;
vector<bool> visted;

vector<int> answer;
int count = 1;

void dfs(int n);

int main()
{
    int n, m, r;
    cin >> n >> m >> r;

    graph = vector<vector<int>>(n + 1);
    visted.resize(n + 1, false);
    answer.resize(n + 1, 0);

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

    dfs(r);

    for (int i = 1; i <= n; i++)
    {
        cout << answer[i] << '\n';
    }

    return 0;
}

void dfs(int n)
{
    if (visted[n])
    {
        return;
    }

    visted[n] = true;
    answer[n] = count++;

    for (int g : graph[n])
    {
        dfs(g);
    }
}
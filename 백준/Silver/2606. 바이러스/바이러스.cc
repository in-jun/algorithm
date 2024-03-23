#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int count = 0;
vector<int> visited(101);
vector<int> v[101];

void dfs(int n)
{
    if (visited[n] == 1)
        return;
    visited[n] = 1;
    count++;
    for (int i = 0; i < v[n].size(); i++)
        dfs(v[n][i]);
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1);

    cout << count - 1;
    return 0;
}
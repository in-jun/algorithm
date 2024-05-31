#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::sort;
using std::tuple;
using std::vector;

vector<int> parent;
vector<int> arr;
vector<tuple<int, int, int>> edge;

int root_find(int x)
{
    if (x == parent[x])
    {
        return x;
    }
    return parent[x] = root_find(parent[x]);
}

bool union_set(int x, int y)
{
    x = root_find(x);
    y = root_find(y);
    if (x == y)
    {
        return false;
    }
    parent[y] = x;
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    parent.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge.push_back({c, a, b});
    }

    sort(edge.begin(), edge.end());

    for (int i = 0; i < m; i++)
    {
        auto [c, a, b] = edge[i];

        if (union_set(a, b))
        {
            arr.push_back(c);
        }

        if (arr.size() == n - 1)
        {
            break;
        }
    }

    int sum = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        sum += arr[i];
    }

    cout << sum;
    return 0;
}
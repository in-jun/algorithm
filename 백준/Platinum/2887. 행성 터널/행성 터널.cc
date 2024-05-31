#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::min;
using std::pair;
using std::sort;
using std::tuple;
using std::vector;

vector<tuple<int, int, int>> edge;
vector<int> parent;
vector<int> arr;

int find_root(int x)
{
    if (parent[x] == x)
    {
        return x;
    }
    return parent[x] = find_root(parent[x]);
}

bool union_set(int x, int y)
{
    x = find_root(x);
    y = find_root(y);

    if (x == y)
    {
        return false;
    }

    parent[y] = x;
    return true;
}

int main()
{
    int n;
    cin >> n;

    parent.resize(n);

    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }

    vector<pair<int, int>> x;
    vector<pair<int, int>> y;
    vector<pair<int, int>> z;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        x.push_back({a, i});
        y.push_back({b, i});
        z.push_back({c, i});
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    sort(z.begin(), z.end());

    for (int i = 0; i < n - 1; i++)
    {
        edge.push_back({x[i + 1].first - x[i].first, x[i + 1].second, x[i].second});
        edge.push_back({y[i + 1].first - y[i].first, y[i + 1].second, y[i].second});
        edge.push_back({z[i + 1].first - z[i].first, z[i + 1].second, z[i].second});
    }

    sort(edge.begin(), edge.end());

    for (int i = 0; i < edge.size(); i++)
    {
        auto [c, a, b] = edge[i];
        if (union_set(a, b))
        {
            arr.push_back(c);
        }
    }

    int answer = 0;
    for (int n : arr)
    {
        answer += n;
    }

    cout << answer;
    return 0;
}
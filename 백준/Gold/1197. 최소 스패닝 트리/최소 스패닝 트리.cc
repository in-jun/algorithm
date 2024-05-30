#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::max;
using std::min;
using std::sort;
using std::tuple;
using std::vector;

vector<tuple<int, int, int>> edges;
vector<int> u;
vector<int> arr;

int find_root(int x)
{
    if (u[x] == x)
    {
        return x;
    }

    return u[x] = find_root(u[x]);
}

bool union_root(int x, int y)
{
    x = find_root(x);
    y = find_root(y);

    if (x == y)
    {
        return false;
    }

    u[max(x, y)] = min(x, y);
    return true;
}

int main()
{
    int v, e;
    cin >> v >> e;

    u.resize(v + 1);
    edges.resize(e + 1);

    for (int i = 1; i <= v; i++)
    {
        u[i] = i;
    }

    for (int i = 1; i <= e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edges[i] = {c, a, b};
    }

    edges[0] = {-1e9, 0, 0};

    sort(edges.begin(), edges.end());

    for (int i = 1; i <= e; i++)
    {
        auto [c, f, s] = edges[i];

        if (union_root(f, s))
        {
            arr.push_back(c);
        }

        if (arr.size() == v - 1)
        {
            break;
        }
    }

    int sum = 0;
    for (int n : arr)
    {
        sum += n;
    }

    cout << sum;
    return 0;
}
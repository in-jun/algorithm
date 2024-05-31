#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
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
    while (1)
    {
        int m, n;
        cin >> m >> n;

        if (m == 0 && n == 0)
        {
            return 0;
        }

        edge = vector<tuple<int, int, int>>();
        parent = vector<int>(m + 1);
        arr = vector<int>();

        for (int i = 0; i <= m; i++)
        {
            parent[i] = i;
        }

        int max = 0;
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            edge.push_back({z, x, y});
            max += z;
        }

        sort(edge.begin(), edge.end());

        for (int i = 0; i < edge.size(); i++)
        {
            auto [c, x, y] = edge[i];
            if (union_set(x, y))
            {
                arr.push_back(c);
            }
        }

        int min = 0;
        for (int n : arr)
        {
            min += n;
        }

        cout << max - min << '\n';
    }
    return 0;
}
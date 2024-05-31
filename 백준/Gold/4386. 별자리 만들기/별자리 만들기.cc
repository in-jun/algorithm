#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using std::abs;
using std::cin;
using std::cout;
using std::max;
using std::min;
using std::pair;
using std::pow;
using std::sort;
using std::sqrt;
using std::tuple;
using std::vector;

vector<tuple<double, int, int>> edge;
vector<int> parent;
vector<double> arr;

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

    parent[min(x, y)] = max(x, y);
    return true;
}

int main()
{
    int n;
    cin >> n;

    parent.resize(n + 1);

    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }

    vector<pair<double, double>> input(n);
    for (int i = 0; i < n; i++)
    {
        double a, b;
        cin >> a >> b;
        input[i] = {a, b};
    }

    for (int i = 0; i < n; i++)
    {
        auto [x1, y1] = input[i];
        for (int j = i + 1; j < n; j++)
        {
            auto [x2, y2] = input[j];
            double c = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
            edge.push_back({c, i, j});
        }
    }

    sort(edge.begin(), edge.end());

    for (int i = 0; i < edge.size(); i++)
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

    double answer = 0;
    for (double n : arr)
    {
        answer += n;
    }

    cout.precision(2);
    cout << answer;
    return 0;
}
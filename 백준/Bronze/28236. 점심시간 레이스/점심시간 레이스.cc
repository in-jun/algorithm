#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::make_pair;
using std::pair;
using std::sort;
using std::vector;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<pair<int, int>> v;
    for (int i = 1; i <= k; i++)
    {
        int f, d;
        cin >> f >> d;
        v.push_back(make_pair(m - d + f, i));
    }

    sort(v.begin(), v.end());

    cout << v.front().second;
    return 0;
}
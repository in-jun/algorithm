#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::greater;
using std::pair;
using std::priority_queue;
using std::queue;
using std::vector;

typedef pair<int, int> node;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<vector<int>>> usetime(n + 1, vector<vector<int>>(n + 1));
    priority_queue<node, vector<node>, greater<node>> routesearch;

    for (int i = 0; i < m; i++)
    {
        int start, end, time;
        cin >> start >> end >> time;
        usetime[start][end].push_back(time);
    }

    routesearch.push({0, 1});
    vector<priority_queue<int>> dist(n + 1);
    dist[1].push(0);

    while (routesearch.size())
    {
        auto [time, pos] = routesearch.top();
        routesearch.pop();

        for (int i = 1; i <= n; i++)
            for (int t : usetime[pos][i])
                if (dist[i].size() < k)
                {
                    dist[i].push(time + t);
                    routesearch.push({time + t, i});
                }
                else if (dist[i].top() > time + t)
                {
                    dist[i].pop();
                    dist[i].push(time + t);
                    routesearch.push({time + t, i});
                }
    }

    for (int i = 1; i <= n; i++)
        cout << (dist[i].size() == k ? dist[i].top() : -1) << '\n';
    return 0;
}
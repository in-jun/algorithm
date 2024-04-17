#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std ::greater;
using std::pair;
using std::priority_queue;
using std::vector;

vector<int> dijkstra;
vector<vector<pair<int, int>>> graph;

void dijkstraAlgorithm(int x);

int main()
{
    int n, m, x;
    cin >> n >> m >> x;

    dijkstra.resize(n + 1);
    graph.resize(n + 1);

    for (int i = 0; i < m; i++)
    {
        int strat, end, time;
        cin >> strat >> end >> time;
        graph[strat].push_back({end, time});
    }

    vector<int> answer(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (i != x)
        {
            dijkstraAlgorithm(i);
        }
        answer[i] = dijkstra[x];
    }

    dijkstraAlgorithm(x);

    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        answer[i] += dijkstra[i];
        if (max < answer[i])
            max = answer[i];
    }

    cout << max;
    return 0;
}

void dijkstraAlgorithm(int x)
{
    dijkstra = vector<int>(dijkstra.size(), 2147483647);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, x});
    dijkstra[x] = 0;

    while (!pq.empty())
    {
        int time = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dijkstra[node] < time)
            continue;

        for (pair<int, int> next : graph[node])
        {
            int nextNode = next.first;
            int nextTime = next.second + time;

            if (nextTime < dijkstra[nextNode])
            {
                dijkstra[nextNode] = nextTime;
                pq.push({nextTime, nextNode});
            }
        }
    }
}
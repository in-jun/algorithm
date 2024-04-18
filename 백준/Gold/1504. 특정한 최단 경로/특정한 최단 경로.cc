#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::min;
using std::pair;
using std::priority_queue;
using std::vector;

void dijkstra(vector<vector<pair<int, int>>> &graph, int start, vector<int> &distances);

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    int v1, v2;
    cin >> v1 >> v2;

    vector<int> distances;

    dijkstra(graph, 1, distances);
    long long int oneTov1 = distances[v1];
    long long int oneTov2 = distances[v2];

    dijkstra(graph, v1, distances);
    long long int v1ToN = distances[n];
    long long int v1ToV2 = distances[v2];

    dijkstra(graph, v2, distances);
    long long int v2ToN = distances[n];
    long long int v2ToV1 = distances[v1];

    long long int answer = min(oneTov1 + v1ToV2 + v2ToN, oneTov2 + v2ToV1 + v1ToN);
    cout << ((answer >= 1e9) ? (-1) : (answer));
    return 0;
}

void dijkstra(vector<vector<pair<int, int>>> &graph, int start, vector<int> &distances)
{
    distances.assign(graph.size(), 1e9);
    distances[start] = 0;

    priority_queue<pair<int, int>> pq;
    pq.push({0, start});

    while (!pq.empty())
    {
        int nowCost = pq.top().first;
        int nowNode = pq.top().second;
        pq.pop();

        if (distances[nowNode] < nowCost)
            continue;

        for (pair<int, int> next : graph[nowNode])
        {
            int nextNode = next.first;
            int nextCost = next.second + nowCost;

            if (nextCost < distances[nextNode])
            {
                distances[nextNode] = nextCost;
                pq.push({nextCost, nextNode});
            }
        }
    }
}
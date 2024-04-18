#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using std::cin;
using std::cout;
using std::pair;
using std::priority_queue;
using std::stack;
using std::vector;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }

    int start, end;
    cin >> start >> end;

    vector<int> dijkstra(n + 1, 1e9);
    dijkstra[start] = 0;

    priority_queue<pair<int, int>> pq;
    pq.push({0, start});

    vector<int> route(n + 1);

    while (!pq.empty())
    {
        int nowNode = pq.top().second;
        int nowCost = pq.top().first;
        pq.pop();

        if (dijkstra[nowNode] < nowCost)
            continue;

        for (pair<int, int> next : graph[nowNode])
        {
            int nextNode = next.first;
            int nextCost = next.second + nowCost;

            if (nextCost < dijkstra[nextNode])
            {
                route[nextNode] = nowNode;
                dijkstra[nextNode] = nextCost;
                pq.push({nextCost, nextNode});
            }
        }
    }

    stack<int> answer;
    int next = end;
    answer.push(end);

    while (next != start)
    {
        next = route[next];
        answer.push(next);
    }

    cout << dijkstra[end] << '\n';
    cout << answer.size() << '\n';
    while (!answer.empty())
    {
        cout << answer.top() << ' ';
        answer.pop();
    }
    return 0;
}
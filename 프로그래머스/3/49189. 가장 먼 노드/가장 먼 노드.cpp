#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<vector<int>> edge)
{
    vector<int> graph[50000];
    vector<int> queue;
    vector<int> dist(n + 1, -1);

    int answer = 0;
    queue.push_back(1);
    dist[1] = 0;

    for (vector<int> v : edge)
    {
        graph[v[0]].push_back(v[1]);
        graph[v[1]].push_back(v[0]);
    }

    while (!queue.empty())
    {
        int cur = queue.front();
        queue.erase(queue.begin());

        for (int next : graph[cur])
        {
            if (dist[next] == -1)
            {
                dist[next] = dist[cur] + 1;
                queue.push_back(next);
            }
        }
    }

    int max_dist = 0;
    for (int max : dist)
        if (max > max_dist)
            max_dist = max;

    for (int d : dist)
        if (d == max_dist)
            answer++;

    return answer;
}
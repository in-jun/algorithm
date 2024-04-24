#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;
    queue<pair<int, int>> q;
    priority_queue<int> pq;

    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }

    while (true)
    {
        int index = q.front().first;
        int value = q.front().second;
        q.pop();

        if (value == pq.top())
        {
            pq.pop();
            answer++;

            if (index == location)
            {
                break;
            }
        }
        else
        {
            q.push({index, value});
        }
    }
    return answer;
}
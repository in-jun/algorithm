#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::pair;
using std::priority_queue;
using std::sort;
using std::vector;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> jewels(n);
    for (int i = 0; i < n; i++)
    {
        cin >> jewels[i].first >> jewels[i].second;
    }

    vector<int> bag(k);
    for (int i = 0; i < k; i++)
    {
        cin >> bag[i];
    }

    sort(jewels.begin(), jewels.end());
    sort(bag.begin(), bag.end());

    long answer = 0;
    priority_queue<int> pq;
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        while (j < n && bag[i] >= jewels[j].first)
        {
            pq.push(jewels[j].second);
            j++;
        }
        if (!pq.empty())
        {
            answer += pq.top();
            pq.pop();
        }
    }

    cout << answer;
    return 0;
}
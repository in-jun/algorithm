#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::pair;
using std::queue;
using std::vector;

int main()
{
    int n;
    cin >> n;

    vector<int> indegree(n + 1);
    vector<pair<int, int>> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;

        a[i] = {x, y};
        indegree[x]++;
        indegree[y]++;
    }

    queue<int> q;
    vector<bool> ans(n + 1);

    for (int i = 1; i <= n; i++)
        if (indegree[i] < 2)
            q.push(i), ans[i] = true;

    while (q.size())
    {
        int now = q.front();
        q.pop();

        if (--indegree[a[now].first] < 2 && !ans[a[now].first])
            q.push(a[now].first), ans[a[now].first] = true;
        if (--indegree[a[now].second] < 2 && !ans[a[now].second])
            q.push(a[now].second), ans[a[now].second] = true;
    }

    int count = 0;

    for (int i = 1; i <= n; i++)
        if (!ans[i])
            count++;
    cout << count << '\n';

    for (int i = 1; i <= n; i++)
        if (!ans[i])
            cout << i << ' ';
    return 0;
}
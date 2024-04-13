#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std ::queue;
using std::vector;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> arr(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    vector<int> ans(n + 1);
    vector<bool> visited(n + 1, false);
    queue<int> q;

    q.push(1);
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int now : arr[parent])
        {
            if (visited[now] == false)
            {
                visited[now] = true;
                q.push(now);
                ans[now] = parent;
            }
        }
    }

    for (int i = 2; i <= n; i++)
        cout << ans[i] << '\n';
    return 0;
}
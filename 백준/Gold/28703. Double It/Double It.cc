#include <iostream>
#include <queue>
#include <vector>
using std::cin;
using std::cout;
using std::greater;
using std::max;
using std::min;
using std::priority_queue;
using std::vector;

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> q;

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        mx = max(mx, v);
        q.push(v);
    }

    int curmx = mx, ans = curmx - q.top();
    while (q.top() < mx)
    {
        int v = q.top();
        q.pop();
        q.push(2 * v);
        ans = min(ans, curmx - v);
        curmx = max(curmx, 2 * v);
    }

    cout << min(curmx - q.top(), ans);
    return 0;
}
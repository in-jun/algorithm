#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::queue;

int main()
{
    queue<int> q;

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        q.push(i);

    cout << '<';
    while (q.size() > 1)
    {
        for (int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front();
    cout << '>';
    return 0;
}
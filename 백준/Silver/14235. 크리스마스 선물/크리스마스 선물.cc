#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::priority_queue;

int main()
{
    priority_queue<int> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            if (pq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                int x;
                cin >> x;
                pq.push(x);
            }
        }
    }
    return 0;
}
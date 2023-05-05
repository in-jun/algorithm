#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::queue;
using std::string;

int main()
{
    int n, x;
    string cmd;
    queue<int> q;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> cmd;

        if (cmd == "push")
        {
            cin >> x;
            q.push(x);
        }
        else if (cmd == "pop")
        {
            if (q.empty())
                cout << "-1\n";
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (cmd == "size")
            cout << q.size() << '\n';
        else if (cmd == "empty")
            cout << q.empty() << '\n';
        else if (cmd == "front")
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.front() << '\n';
        }
        else if (cmd == "back")
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.back() << '\n';
        }
    }
    return 0;
}
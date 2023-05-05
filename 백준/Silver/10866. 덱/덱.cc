#include <iostream>
#include <deque>
using std::cin;
using std::cout;
using std::deque;
using std::string;

int main()
{
    deque<int> d;
    string cmd;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> cmd;

        if (cmd == "push_front")
        {
            cin >> x;
            d.push_front(x);
        }
        else if (cmd == "push_back")
        {
            cin >> x;
            d.push_back(x);
        }
        else if (cmd == "pop_front")
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if (cmd == "pop_back")
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if (cmd == "size")
        {
            cout << d.size() << '\n';
        }
        else if (cmd == "empty")
        {
            cout << d.empty() << '\n';
        }
        else if (cmd == "front")
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.front() << '\n';
            }
        }
        else if (cmd == "back")
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.back() << '\n';
            }
        }
    }
    return 0;
}
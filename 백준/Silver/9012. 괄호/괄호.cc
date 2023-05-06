#include <iostream>
#include <stack>
using std::cin;
using std::cout;
using std::stack;
using std::string;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string line;
        stack<char> s;
        bool check = true;
        getline(cin, line);
        for (char c : line)
        {
            if (c == '(')
                s.push(c);
            else if (c == ')')
            {
                if (s.empty())
                {
                    check = false;
                    break;
                }
                else
                    s.pop();
            }
        }
        cout << ((check && s.empty()) ? "YES\n" : "NO\n");
    }
    return 0;
}
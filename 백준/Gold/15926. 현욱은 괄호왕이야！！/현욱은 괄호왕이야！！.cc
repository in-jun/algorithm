#include <iostream>
#include <stack>
using std::cin;
using std::cout;
using std::max;
using std::stack;
using std::string;

int main()
{
    int n, Max = 0;
    stack<int> s;
    string str;
    cin >> n >> str;
    s.push(-1);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
            s.push(i);
        else
        {
            s.pop();
            if (s.empty())
                s.push(i);
            else
                Max = max(Max, i - s.top());
        }
    }
    cout << Max;
    return 0;
}
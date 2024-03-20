#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int bit = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "add")
        {
            int x;
            cin >> x;
            bit = bit | (1 << x);
        }
        else if (s == "remove")
        {
            int x;
            cin >> x;
            bit = bit & ~(1 << x);
        }
        else if (s == "check")
        {
            int x;
            cin >> x;
            cout << !!(bit & (1 << x)) << '\n';
        }
        else if (s == "toggle")
        {
            int x;
            cin >> x;
            bit = bit ^ (1 << x);
        }
        else if (s == "all")
        {
            bit = (1 << 21) - 1;
        }
        else if (s == "empty")
        {
            bit = 0;
        }
    }
    return 0;
}
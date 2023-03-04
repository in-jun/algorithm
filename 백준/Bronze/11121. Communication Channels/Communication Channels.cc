#include <iostream>
using std::cin;
using std::cout;
using std::string;

bool check();
string a, b;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << (check() ? "OK" : "ERROR") << '\n';
    }
    return 0;
}

bool check()
{
    for (int i = 0; i < a.length(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}
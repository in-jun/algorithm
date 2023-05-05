#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::to_string;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int m = i;
        string s = to_string(i);
        for (int j = 0; j < s.length(); j++)
            m += s[j] - '0';
        if (m == n)
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
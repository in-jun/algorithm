#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int t, r;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> r >> s;
        for (int i = 0; i < s.length(); i++)
            for (int j = 0; j < r; j++)
                cout << s[i];
        cout << '\n';
    }
    return 0;
}
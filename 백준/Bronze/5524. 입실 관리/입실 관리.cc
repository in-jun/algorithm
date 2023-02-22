#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            if (s[i] >= 'A' && s[i] < 'a')
                s[i] = s[i] + 32;
        cout << s << '\n';
    }
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    string str;
    char c;
    cin >> n;
    while (n--)
    {
        cin >> str;
        cout << str[0];
        c = str[0];
        for (int i = 1; i < str.length(); i++)
            if (str[i] != c)
            {
                cout << str[i];
                c = str[i];
            }
        cout << '\n';
    }
    return 0;
}
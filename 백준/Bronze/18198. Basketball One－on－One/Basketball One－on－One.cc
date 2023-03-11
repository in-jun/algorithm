#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    int a = 0, b = 0;
    cin >> str;
    for (int i = 0; i < str.length() - 1; i += 2)
    {
        if (str[i] == 'A')
            a += ((str[i + 1] == '1') ? 1 : 2);
        else
            b += ((str[i + 1] == '1') ? 1 : 2);
    }
    cout << (a > b ? 'A' : 'B');
    return 0;
}
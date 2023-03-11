#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int count = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
        if (str[i] != '0')
            count++;
    for (int i = str.length() - 1; i >= 0 && str[i] == '0'; i--)
        count++;
    cout << (str.length() - count);
    return 0;
}
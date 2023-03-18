#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;

int main()
{
    int n;
    char str[101];
    cin >> n >> str;
    for (int i = 0; i < n; i++)
        if (str[i] == 'J')
            cout << 'J';
    for (int i = 0; i < n; i++)
        if (str[i] == 'O')
            cout << 'O';
    for (int i = 0; i < n; i++)
        if (str[i] == 'I')
            cout << 'I';
    return 0;
}
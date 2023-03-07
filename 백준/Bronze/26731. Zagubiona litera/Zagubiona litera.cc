#include <iostream>
using std::cin;
using std::cout;

int main()
{
    char c;
    bool check[26]{false};
    for (int i = 0; i < 25; i++)
    {
        cin >> c;
        check[c - 65] = true;
    }
    for (int i = 0; i < 26; i++)
        if (!check[i])
            cout << char(i + 65);
    return 0;
}
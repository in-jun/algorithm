#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < j; i++)
            cout << '*';
        cout << '\n';
    }
    for (int j = n - 1; j >= 1; j--)
    {
        for (int i = 0; i < j; i++)
            cout << '*';
        cout << '\n';
    }
    return 0;
}
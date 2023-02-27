#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
                cout << '*';
            cout << '\n';
        }
    }
    return 0;
}
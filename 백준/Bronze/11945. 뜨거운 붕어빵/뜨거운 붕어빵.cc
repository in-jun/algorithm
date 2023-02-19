#include <iostream>
using std::cin;
using std::cout;

int main()
{
    char input[10];
    int n, m;
    cin >> n >> m;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
            cin >> input[i];
        for (int i = m - 1; i >= 0; i--)
            cout << input[i];
        cout << '\n';
    }
    return 0;
}
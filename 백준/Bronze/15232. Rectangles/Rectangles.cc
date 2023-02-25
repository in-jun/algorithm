#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int i = 0; i < c; i++)
            cout << '*';
        cout << '\n';
    }
    return 0;
}
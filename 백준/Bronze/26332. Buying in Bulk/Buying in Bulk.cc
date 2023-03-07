#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, c, p;
    cin >> n;
    while (n--)
    {
        cin >> c >> p;
        cout << c << ' ' << p << '\n';
        cout << (p + ((c - 1) * (p - 2))) << '\n';
    }
    return 0;
}
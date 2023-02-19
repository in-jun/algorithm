#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c, d, e;
    for (int i = 0; i < 2; i++)
    {
        cin >> a >> b >> c >> d >> e;
        cout << (a * 6 + b * 3 + c * 2 + d + e * 2) << '\n';
    }
    return 0;
}
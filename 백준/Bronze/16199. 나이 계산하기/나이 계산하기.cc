#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (((d - a) * 365 + (e - b) * 30 + (f - c)) / 365) << '\n';
    cout << (d - a + 1) << '\n';
    cout << (d - a);
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    if (a < b && b < c && c < d && d < e && e < f && f < g && g < h)
        cout << "ascending";
    else if (a > b && b > c && c > d && d > e && e > f && f > g && g > h)
        cout << "descending";
    else
        cout << "mixed";
    return 0;
}
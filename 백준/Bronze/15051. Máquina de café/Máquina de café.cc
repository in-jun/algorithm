#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::min;

int main()
{
    int a1, a2, a3, i1, i2, i3;
    cin >> a1 >> a2 >> a3;
    i1 = a2 * 2 + a3 * 4;
    i2 = a1 * 2 + a3 * 2;
    i3 = a1 * 4 + a2 * 2;
    cout << min({i1, i2, i3});
    return 0;
}
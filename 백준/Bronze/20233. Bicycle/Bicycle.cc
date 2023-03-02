#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, x, b, y, t;
    cin >> a >> x >> b >> y >> t;
    cout << (a + (((((t - 30) > 0) * (t - 30)) * x) * 21)) << ' ' << (b + (((((t - 45) > 0) * (t - 45)) * y) * 21));
    return 0;
}
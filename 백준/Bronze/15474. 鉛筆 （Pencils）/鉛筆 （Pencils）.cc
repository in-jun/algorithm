#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, a, b, c, d, x, y;
    cin >> n >> a >> b >> c >> d;
    x = (((n / a) + (n % a != 0)) * b);
    y = (((n / c) + (n % c != 0)) * d);
    cout << (x < y ? x : y);
    return 0;
}
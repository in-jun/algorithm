#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int x, n;
    cin >> x >> n;
    while (n--)
        x = (x & 1) ? (x << 1) ^ 6 : (x >> 1) ^ 6;
    cout << x;
    return 0;
}
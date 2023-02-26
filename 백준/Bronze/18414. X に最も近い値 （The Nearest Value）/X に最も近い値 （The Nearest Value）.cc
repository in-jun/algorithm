#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int x, l, r;
    cin >> x >> l >> r;
    cout << ((l <= x && x <= r) ? x : ((x < l) ? l : r));
    return 0;
}
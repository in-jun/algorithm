#include <iostream>
using std::cin;
using std::cout;
using std::max;

int main()
{
    int l, r;
    cin >> l >> r;
    if (l || r)
        cout << ((l == r) ? "Even " : "Odd ") << (max(l, r) * 2);
    else
        cout << "Not a moose";
    return 0;
}
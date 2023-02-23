#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a[3], b[3], apples, bananas;
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    apples = (a[0] * 3 + a[1] * 2 + a[2]);
    bananas = (b[0] * 3 + b[1] * 2 + b[2]);
    cout << ((apples == bananas) ? 'T' : ((apples > bananas) ? 'A' : 'B'));
    return 0;
}
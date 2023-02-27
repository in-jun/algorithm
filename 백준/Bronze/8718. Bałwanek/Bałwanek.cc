#include <iostream>
using std::cin;
using std::cout;

int main()
{
    long long int x, k;
    cin >> x >> k;
    if (7000 * k <= 1000 * x)
        cout << 7000 * k;
    else if (3500 * k <= 1000 * x)
        cout << 3500 * k;
    else if (1750 * k <= 1000 * x)
        cout << 1750 * k;
    else
        cout << 0;
    return 0;
}
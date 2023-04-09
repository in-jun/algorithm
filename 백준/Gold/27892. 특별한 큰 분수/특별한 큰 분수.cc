#include <iostream>
using std::cin;
using std::cout;

typedef unsigned long long int ull;

ull f(ull x, ull n)
{
    int _7[3]{7, 8, 2};
    int _12[4]{12, 0, 6, 5};
    for (ull i = 0; i < n; i++)
    {
        x = (x & 1) ? (x << 1) ^ 6 : (x >> 1) ^ 6;
        if (x == 4)
            return 4;
        if (x == 7)
            return _7[(n - i - 1) % 3];
        if (x == 12)
            return _12[(n - i - 1) % 4];
    }
    return x;
}

int main()
{
    ull x, n;
    cin >> x >> n;
    cout << f(x, n);
    return 0;
}
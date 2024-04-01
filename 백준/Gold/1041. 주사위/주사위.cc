#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::max;
using std::min;

int main()
{
    int n;
    long long int a, b, c, d, e, f;
    cin >> n >> a >> b >> c >> d >> e >> f;

    long long int one = min({a, b, c, d, e, f});
    long long int two = min({a + b, a + c, a + d, a + e, b + c, b + d, b + f, c + e, c + f, d + e, d + f, e + f});
    long long int three = min({a + b + c, a + b + d, a + c + e, a + d + e, b + c + f, b + d + f, c + e + f, d + e + f});

    if (n == 1)
        cout << a + b + c + d + e + f - max({a, b, c, d, e, f});
    else
        cout << three * 4 + two * (n - 1) * 4 + two * (n - 2) * 4 + one * (n - 2) * (n - 1) * 4 + one * (n - 2) * (n - 2);
    return 0;
}
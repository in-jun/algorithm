#include <iostream>
using std::cin;

int main()
{
    unsigned long long int n, f;
    f = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
        f %= 10000000000000;
        while (!(f % 10))
            f /= 10;
    }
    printf("%05lld", f % 100000);
    return 0;
}
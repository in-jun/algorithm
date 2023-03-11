#include <iostream>
using std::cin;
using std::cout;

int main()
{
    unsigned long long int n, f;
    f = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
        f %= 100000000;
        while (!(f % 10))
            f /= 10;
    }
    cout << f % 10;
    return 0;
}
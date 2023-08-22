#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int main()
{
    long long n;
    cin >> n;

    if (!(sqrt(n) - int(sqrt(n))))
        cout << -1;
    else
    {
        int count = 0;
        for (long long i = 1; i <= sqrt(n / 2); i++)
        {
            long long j = n - i * i;
            if (!(sqrt(j) - int(sqrt(j))))
                count++;
        }
        for (long long i = 1; i <= sqrt(n); i++)
            if (!(n % i) && !((i + (n / i)) % 2) && (i != n / i))
                count++;
        cout << count;
    }
    return 0;
}
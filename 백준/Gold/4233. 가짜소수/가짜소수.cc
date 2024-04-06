#include <iostream>
using std::cin;
using std::cout;

long long int pow(long long int a, long long int b, long long int c)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b % 2 == 0)
    {
        long long int temp = pow(a, b / 2, c);
        return (temp * temp) % c;
    }
    else
    {
        long long int temp = pow(a, (b - 1) / 2, c);
        return (((temp * temp) % c) * a) % c;
    }
}

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return n != 1;
}

int main()
{
    while (1)
    {
        int p, a;
        cin >> p >> a;

        if (p == 0 && a == 0)
        {
            break;
        }

        cout << (!isPrime(p) && (pow(a, p, p)) == a ? "yes" : "no") << '\n';
    }
    return 0;
}
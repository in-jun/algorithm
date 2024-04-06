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
        long long int temp = pow(a, b - 1, c);
        return ((temp % c) * a) % c;
    }
}

int main()
{
    const int mod = 1000000007;

    long long int a, x;
    cin >> a >> x;
    
    cout << pow(a % mod, x, mod);
    return 0;
}
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

int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;
    cout << pow(a, b, c);
    return 0;
}
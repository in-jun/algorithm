#include <iostream>
using std::cin;
using std::cout;

long long int pow(__int128_t a, __int128_t b, __int128_t c)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b % 2 == 0)
    {
        __int128_t temp = pow(a, b / 2, c);
        return (temp * temp) % c;
    }
    else
    {
        __int128_t temp = pow(a, b - 1, c);
        return ((temp % c) * a) % c;
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long int num;
        cin >> num;
        if (num == 1)
        {
            cout << 1;
        }
        else
        {
            cout << pow(2, num - 2, 1e9 + 7);
        }
        cout << '\n';
    }
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

bool prime(unsigned int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (!(n % i))
            return false;
    return true;
}

int main()
{
    int t;
    unsigned int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (1)
        {
            if (prime(n))
            {
                cout << n << '\n';
                break;
            }
            n++;
        }
    }
}
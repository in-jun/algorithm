#include <iostream>
using std::cin;
using std::cout;

bool prime(int n)
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
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
        if (prime(i))
            cout << i << '\n';
    return 0;
}
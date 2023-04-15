#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, count = 0;
    cin >> n;
    while (n >= 0)
    {
        if (!(n % 5 && n))
        {
            cout << ((n / 5) + count);
            return 0;
        }
        n -= 2;
        count++;
    }
    cout << -1;
    return 0;
}
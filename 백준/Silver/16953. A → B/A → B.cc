#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 1;
    while (b != a)
    {
        if (a < b && b % 2 == 0)
        {
            b /= 2;
            ans++;
        }
        else if (a < b && b % 10 == 1)
        {
            b /= 10;
            ans++;
        }
        else
        {
            ans = -1;
            break;
        }
    }

    cout << ans;
    return 0;
}
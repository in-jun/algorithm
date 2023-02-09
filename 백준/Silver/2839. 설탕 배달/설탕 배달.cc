#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int n;
    cin >> n;
    int i(0);
    while (n >= 0)
    {
        if (n % 5 == 0)
        {
            cout << i + (n / 5);
            return 0;
        }
        i++;
        n -= 3;
    }
    cout << -1;
}
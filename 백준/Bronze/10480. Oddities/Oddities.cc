#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        cout << x << ((x % 2) ? " is odd" : " is even") << '\n';
    }
    return 0;
}
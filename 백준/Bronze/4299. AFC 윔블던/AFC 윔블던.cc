#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    if ((a + b) % 2 != 0 || (a - b) % 2 != 0)
        cout << -1;
    else if (b > a)
        cout << -1;
    else
        cout << ((a + b) / 2) << ' ' << ((a - b) / 2);
    return 0;
}
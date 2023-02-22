#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m == 1 || m == 2)
        cout << "NEWBIE!";
    else if (m <= n)
        cout << "OLDBIE!";
    else
        cout << "TLE!";
    return 0;
}
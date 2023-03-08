#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, m;
    cin >> n >> m;
    if (0 < (n - 7))
        cout << n - 7;
    else
        cout << m + 7;
    return 0;
}
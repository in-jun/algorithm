#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << ((n / 2) < (m / 2) ? (n / 2) : (m / 2));
    return 0;
}
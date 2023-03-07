#include <iostream>
using std::cin;
using std::cout;
using std::max;
int main()
{
    int m, n;
    cin >> m >> n;
    cout << ((m == 1 || n == 1) ? max(m, n) : ((m + n) * 2 - 4));
    return 0;
}
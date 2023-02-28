#include <iostream>
using std::cin;
using std::cout;

int main()
{
    unsigned int a, b;
    cin >> a >> b;
    cout << ((!(a % 2) || !(b % 2)) ? 0 : ((a < b) ? a : b));
    return 0;
}
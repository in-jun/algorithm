#include <iostream>
using std::cin;
using std::cout;

int main()
{
    double a;
    cin >> a;
    cout << 100 / a << ' ' << 100 / (100 - a);
    return 0;
}
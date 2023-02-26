#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int b, p;
    cin >> b;
    p = (b * 5) - 400;
    cout << p << '\n';
    cout << (p == 100 ? 0 : ((p < 100) ? 1 : -1));
    return 0;
}
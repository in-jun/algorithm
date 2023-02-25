#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << 2;
    else if (((b * b + c * c) == a * a) || ((a * a + c * c) == b * b) || ((a * a + b * b) == c * c))
        cout << 1;
    else
        cout << 0;
    return 0;
}
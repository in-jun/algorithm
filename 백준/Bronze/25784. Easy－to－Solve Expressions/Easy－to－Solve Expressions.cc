#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b + c == a || a + c == b || a + b == c)
        cout << 1;
    else if (b * c == a || a * c == b || a * b == c)
        cout << 2;
    else
        cout << 3;
    return 0;
}
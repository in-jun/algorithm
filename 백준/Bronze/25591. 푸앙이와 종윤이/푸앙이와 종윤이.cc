#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int input1, input2, a, b, c, d, q, r;
    cin >> input1 >> input2;
    a = 100 - input1;
    b = 100 - input2;
    c = 100 - (a + b);
    d = a * b;
    q = d / 100;
    r = d % 100;
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
    cout << c + q << ' ' << r;
    return 0;
}
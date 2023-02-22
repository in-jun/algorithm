#include <iostream>
using std::cin;
using std::cout;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << int((a * b / c > a / b * c) ? (a * b / c) : (a / b * c));
    return 0;
}
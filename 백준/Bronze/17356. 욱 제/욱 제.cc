#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << 1 / (1 + pow(10, ((b - a) / 400)));
    return 0;
}
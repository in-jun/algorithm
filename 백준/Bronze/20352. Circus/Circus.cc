#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int main()
{
    const double pi(3.14159265359);
    double a;
    cin >> a;
    printf("%f", sqrt(a / pi) * 2 * pi);
    return 0;
}
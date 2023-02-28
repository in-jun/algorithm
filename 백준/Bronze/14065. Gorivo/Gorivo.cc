#include <iostream>
using std::cin;
using std::cout;

int main()
{
    const double liter = 3.785411784;
    const double km = 1.609344;
    double x;
    cin >> x;
    printf("%f", 100 / ((km / liter) * x));
    return 0;
}
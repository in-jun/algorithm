#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int main()
{
    unsigned long long int a;
    const double pi = 3.14159265359;
    cin >> a;
    printf("%f", 2 * pi * sqrt(a / pi));
    return 0;
}
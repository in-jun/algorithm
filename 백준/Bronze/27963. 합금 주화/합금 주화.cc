#include <iostream>
using std::cin;
using std::cout;

int main()
{
    double d1, d2, x;
    cin >> d1 >> d2 >> x;
    if (d1 < d2)
        printf("%lf", 100 / (x / d2 + (100 - x) / d1));
    else
        printf("%lf", 100 / (x / d1 + (100 - x) / d2));
    return 0;
}
#include <iostream>
#include <cmath>
using std::cin;

int main()
{
    double w, h;
    cin >> w >> h;
    printf("%f", ((w + h) - sqrt(w * w + h * h)));
    return 0;
}
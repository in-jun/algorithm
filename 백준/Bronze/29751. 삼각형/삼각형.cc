#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

int main()
{
    float a, b;
    cin >> a >> b;
    cout << std::fixed << setprecision(1) << (a * b) / 2;
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (((a * 1440 + b * 60 + c) - 16511) < 0 ? -1 : ((a * 1440 + b * 60 + c) - 16511));
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c, average;
    cin >> a >> b >> c;
    average = (a + b + c) / 3;
    cout << (b - average) + (c - average) * 2;
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, p;
    cin >> a >> p;
    a *= 7;
    p *= 13;
    cout << ((a == p) ? "lika" : ((a > p) ? "Axel" : "Petra"));
    return 0;
}
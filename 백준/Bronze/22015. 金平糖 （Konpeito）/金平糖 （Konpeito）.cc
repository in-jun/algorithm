#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::max;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((max({a, b, c}) * 3) - (a + b + c));
    return 0;
}
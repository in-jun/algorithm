#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << abs((a + d) - (b + c));
    return 0;
}

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int c1, p1, b1, c2, p2, b2;
    cin >> c1 >> p1 >> b1 >> c2 >> p2 >> b2;
    cout << (((c2 - c1) > 0) * (c2 - c1)) + (((b2 - b1) > 0) * (b2 - b1)) + (((p2 - p1) > 0) * (p2 - p1));
    return 0;
}
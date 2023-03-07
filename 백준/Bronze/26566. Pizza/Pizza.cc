#include <iostream>
using std::cin;
using std::cout;

int main()
{
    double n, a1, p1, r1, p2;
    const double pi = 3.14159265359;
    cin >> n;
    while (n--)
    {
        cin >> a1 >> p1 >> r1 >> p2;
        cout << (((p1 / a1) < (p2 / (r1 * r1 * pi))) ? "Slice of pizza" : "Whole pizza") << '\n';
    }
    return 0;
}
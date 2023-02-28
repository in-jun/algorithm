#include <iostream>
using std::cin;
using std::cout;

int main()
{
    long int p1, q1, p2, q2;
    cin >> p1 >> q1 >> p2 >> q2;
    cout << !((p1 * p2) % (q1 * q2 * 2));
    return 0;
}
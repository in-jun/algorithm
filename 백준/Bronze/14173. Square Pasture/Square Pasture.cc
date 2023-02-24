#include <iostream>
using std::cin;
using std::cout;
using std::max;
using std::min;
int main()
{
    int x[4], y[4], a;
    cin >> x[0] >> y[0] >> x[1] >> y[1];
    cin >> x[2] >> y[2] >> x[3] >> y[3];
    a = max(max(x[1], x[3]) - min(x[0], x[2]), max(y[1], y[3]) - min(y[0], y[2]));
    cout << (a * a);
    return 0;
}
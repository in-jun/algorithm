#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int c4, a3, a4;
    cin >> c4 >> a3 >> a4;
    cout << ((c4 * 148392 + a3 * 249480 + a4 * 62370) * 0.000001);
    return 0;
}
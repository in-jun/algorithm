#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << (((x + y) * 60) <= (z * 60 + 30));
    return 0;
}
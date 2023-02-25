#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int k, w, m;
    cin >> k >> w >> m;
    cout << ((w - k) / m) + (((w - k) % m) != 0);
    return 0;
}
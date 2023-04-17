#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((c & 1) ? a ^ b : a);
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((((a + 1) * (b + 1)) / (c + 1)) - 1);
    return 0;
}
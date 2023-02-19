#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b;
    while (cin >> a >> b)
        cout << (b / (a + 1)) << '\n';
    return 0;
}
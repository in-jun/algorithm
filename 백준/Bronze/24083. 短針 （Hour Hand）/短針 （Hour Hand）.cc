#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ((a + b) % 12 + (!((a + b) % 12) * 12));
    return 0;
}
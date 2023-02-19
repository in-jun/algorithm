#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ((a == b) ? 0 : ((a < b) ? -1 : 1));
    return 0;
}
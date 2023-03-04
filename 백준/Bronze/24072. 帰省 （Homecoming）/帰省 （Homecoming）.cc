#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a <= c && c < b);
    return 0;
}
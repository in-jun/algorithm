#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int n, a, b, c;
    cin >> n;
    cin >> a >> b >> c;
    cout << (((n <= a) ? n : a) + ((n <= b) ? n : b) + ((n <= c) ? n : c));
}
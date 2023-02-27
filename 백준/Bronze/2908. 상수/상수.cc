#include <iostream>
using std::cin;
using std::cout;
using std::stoi;
using std::string;

int main()
{
    string a, b, c;
    cin >> a >> b;
    c[0] = a[0];
    a[0] = a[2];
    a[2] = c[0];
    c[0] = b[0];
    b[0] = b[2];
    b[2] = c[0];
    cout << ((stoi(a) > stoi(b)) ? a : b);
    return 0;
}
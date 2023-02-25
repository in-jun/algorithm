#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == 8 || a == 9) && (b == c) && (d == 8 || d == 9))
        cout << "ignore";
    else
        cout << "answer";
    return 0;
}
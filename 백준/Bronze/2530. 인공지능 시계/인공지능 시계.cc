#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c, d, S;
    cin >> a >> b >> c >> d;
    S = a * 3600 + b * 60 + c + d;
    cout << ((S / 3600) % 24) << ' ' << ((S % 3600) / 60) << ' ' << ((S % 3600) % 60);
    return 0;
}
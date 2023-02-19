#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c, d, e, f, S;
    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b >> c >> d >> e >> f;
        S = (d * 3600 + e * 60 + f) - (a * 3600 + b * 60 + c);
        cout << ((S / 3600) % 24) << ' ' << ((S % 3600) / 60) << ' ' << ((S % 3600) % 60) << '\n';
    }
    return 0;
}
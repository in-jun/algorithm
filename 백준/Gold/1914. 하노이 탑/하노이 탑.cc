#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;
using std::to_string;

void hanoi(int n, int s, int w, int t)
{
    if (n == 1)
    {
        cout << s << ' ' << t << '\n';
    }
    else
    {
        hanoi(n - 1, s, t, w);
        cout << s << ' ' << t << '\n';
        hanoi(n - 1, w, s, t);
    }
}

int main()
{
    int n;
    cin >> n;

    __int128 a = 1;
    string str = "";

    for (int i = 0; i < n; i++)
    {
        a *= 2;
    }

    while (a > 0)
    {
        str = to_string(static_cast<int>(a % 10)) + str;
        a /= 10;
    }

    str[str.length() - 1] -= 1;

    cout << str << '\n';

    if (n <= 20)
    {
        hanoi(n, 1, 2, 3);
    }

    return 0;
}
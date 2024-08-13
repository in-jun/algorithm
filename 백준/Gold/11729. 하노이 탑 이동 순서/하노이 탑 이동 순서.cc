#include <iostream>
using std::cin;
using std::cout;

void hanoi(int n, int a, int b, int c)
{
    if (n == 1)
    {
        cout << a << ' ' << c << '\n';
    }
    else
    {
        hanoi(n - 1, a, c, b);
        cout << a << ' ' << c << '\n';
        hanoi(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    cin >> n;

    int a = 1;
    for (int i = 0; i < n; i++)
    {
        a *= 2;
    }

    cout << a - 1 << '\n';

    hanoi(n, 1, 2, 3);

    return 0;
}
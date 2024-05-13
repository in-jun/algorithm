#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    int a = 1, b = 2, c;
    for (int i = 1; i < n; i++)
    {
        c = (a + b) % 10007;
        a = b;
        b = c;
    }

    cout << a % 10007;
    return 0;
}
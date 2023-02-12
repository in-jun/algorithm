#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    unsigned long long int a = 0, b = 1, c;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << b;
    return 0;
}

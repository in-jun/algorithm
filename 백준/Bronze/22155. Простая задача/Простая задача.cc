#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, i, f;
    cin >> n;
    while (n--)
    {
        cin >> i >> f;
        cout << (((i <= 1 && f <= 2) || (i <= 2 && f <= 1)) ? "Yes" : "No") << '\n';
    }
    return 0;
}
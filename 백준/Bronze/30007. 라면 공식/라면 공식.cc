#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, x;
        cin >> a >> b >> x;
        cout << a * (x - 1) + b << '\n';
    }
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << i << (!(i % 6) || i == n ? " Go! " : " ");
    return 0;
}
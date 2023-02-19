#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, copy;
    cin >> n;
    while (n--)
    {
        cin >> copy;
        cout << copy << ' ' << copy << '\n';
    }
    return 0;
}
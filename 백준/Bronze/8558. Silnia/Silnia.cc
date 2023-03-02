#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, output = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        output *= i;
        output %= 10;
    }
    cout << output;
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        count += i * i * i;
    cout << count;
    return 0;
}
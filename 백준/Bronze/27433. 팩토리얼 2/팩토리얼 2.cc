#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    unsigned long long int a = 1;
    cin >> n;
    for (long long int i = 1; i <= n; i++)
        a *= i;
    cout << a;
    return 0;
}
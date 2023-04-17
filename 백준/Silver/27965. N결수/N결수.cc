#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int main()
{
    unsigned long long int n, k, num = 0;
    cin >> n >> k;
    for (unsigned long long int i = 1; i <= n; i++)
        num = ((num * int(pow(10, int((log10(i) + 1))))) + i) % k;
    cout << num;
    return 0;
}
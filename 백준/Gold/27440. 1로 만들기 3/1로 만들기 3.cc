#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::min;

map<int, int> m;

int dp(unsigned long long int n)
{
    if (m.find(n) != m.end())
        return m[n];
    m[n] = min(dp(n / 2) + (n % 2), dp(n / 3) + (n % 3)) + 1;
    return m[n];
}

int main()
{
    unsigned long long int n;
    cin >> n;
    m[1] = 0;
    m[2] = 1;
    cout << dp(n);
    return 0;
}
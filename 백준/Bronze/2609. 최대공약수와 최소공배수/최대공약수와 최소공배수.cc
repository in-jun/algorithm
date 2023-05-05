#include <iostream>
#include <deque>
using std::cin;
using std::cout;

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << '\n';
    cout << lcm(a, b);
    return 0;
}
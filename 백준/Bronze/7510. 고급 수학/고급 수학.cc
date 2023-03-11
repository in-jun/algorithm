#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, a, b, c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        a *= a;
        b *= b;
        c *= c;
        cout << "Scenario #" << i << ":\n";
        cout << ((a + b == c || b + c == a || c + a == b) ? "yes" : "no") << "\n\n";
    }
    return 0;
}
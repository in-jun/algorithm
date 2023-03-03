#include <iostream>
using std::cin;
using std::cout;
using std::max;
using std::min;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a + b, a - b) << ' ' << min(a + b, a - b);
    return 0;
}
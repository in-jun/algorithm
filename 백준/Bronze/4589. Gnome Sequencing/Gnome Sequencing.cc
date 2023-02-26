#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, a, b, c;
    cout << "Gnomes:\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        cout << (((a <= b && b <= c) || (a >= b && b >= c)) ? "Ordered\n" : "Unordered\n");
    }
    return 0;
}
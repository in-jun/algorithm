#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, a, b, min = 1001;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        min = ((a <= b) && (b < min)) ? b : min;
    }
    cout << min;
    return 0;
}
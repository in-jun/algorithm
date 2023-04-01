#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, d = 0, p = 0;
    char input;
    cin >> n;
    while (n-- && ((d - p) < 2) && ((p - d) < 2))
    {
        cin >> input;
        if (input == 'D')
            d++;
        else
            p++;
    }
    cout << d << ':' << p;
    return 0;
}
#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int t, n[5];
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 5; i++)
            cin >> n[i];
        sort(n, n + 5);
        if ((n[3] - n[1]) >= 4)
            cout << "KIN\n";
        else
            cout << n[1] + n[2] + n[3] << '\n';
    }
    return 0;
}
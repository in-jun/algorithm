#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, w, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w >> k;
        cout << (w * k) / 2 << '\n';
    }
    return 0;
}
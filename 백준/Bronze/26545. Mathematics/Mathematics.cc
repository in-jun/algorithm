#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, a, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        count += a;
    }
    cout << count;
    return 0;
}
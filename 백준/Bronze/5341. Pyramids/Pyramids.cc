#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, count;
    while (cin >> n && n != 0)
    {
        count = 0;
        for (int i = 1; i <= n; i++)
            count += i;
        cout << count<<'\n';
    }
    return 0;
}
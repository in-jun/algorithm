#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int cnt = 1;
    int a, b;
    while (cin >> a && a != 0)
    {
        for (int i = 0; i < a; i++)
            cin >> b;
        cout << "Case " << cnt << ": Sorting... done!\n";
        cnt++;
    }
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int p[4], x;
    cin >> p[0] >> p[1] >> p[2] >> p[3] >> x;
    for (int i = 0; i < 4; i++)
    {
        if (p[i] == x)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int h, m;
    cin >> h >> m;
    cout << (((h - 9) * 60) + m);
    return 0;
}
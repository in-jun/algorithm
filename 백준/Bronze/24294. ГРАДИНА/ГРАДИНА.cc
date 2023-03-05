#include <iostream>
using std::cin;
using std::cout;
using std::max;

int main()
{
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << ((max(w1, w2) + h1 + h2) * 2) + 4;
    return 0;
}
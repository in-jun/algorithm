#include <iostream>
using std::cin;
using std::cout;

int main()
{
    long long int r, c, n;
    cin >> r >> c >> n;
    cout << ((r / n) + (r % n != 0)) * ((c / n) + (c % n != 0));
    return 0;
}
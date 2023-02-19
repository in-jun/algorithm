#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    cout << (((n / 10) == (n % 10)) ? 1 : 0);
    return 0;
}
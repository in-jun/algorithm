#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    cout << (n && !(n & (n - 1)));
    return 0;
}
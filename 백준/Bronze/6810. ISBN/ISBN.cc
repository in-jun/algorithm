#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "The 1-3-sum is " << (a + (b * 3) + c + 91);
    return 0;
}
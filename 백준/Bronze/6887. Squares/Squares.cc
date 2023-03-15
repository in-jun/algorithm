#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::sqrt;

int main()
{
    int n;
    cin >> n;
    cout << "The largest square has side length " << int(sqrt(n)) << '.';
    return 0;
}
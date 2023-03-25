#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    cout << ((n % 2) ? "SK" : "CY");
    return 0;
}
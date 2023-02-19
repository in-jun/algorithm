#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < (n / 5); i++)
        cout << 'V';
    for (int i = 0; i < (n % 5); i++)
        cout << 'I';
    return 0;
}
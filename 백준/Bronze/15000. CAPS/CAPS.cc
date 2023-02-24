#include <iostream>
using std::cout;

int main()
{
    char n;
    while (scanf("%c", &n) && n != '\n')
        cout << char(n - 32);
    return 0;
}
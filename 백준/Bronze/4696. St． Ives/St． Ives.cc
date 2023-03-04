#include <iostream>
using std::cin;
using std::cout;

int main()
{
    double n;
    while (cin >> n && n != 0)
        printf("%0.2f\n", 1 + n + n * n + n * n * n + n * n * n * n);
    return 0;
}
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    double a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        printf("$%.2f\n", a * b * c);
    }
    return 0;
}